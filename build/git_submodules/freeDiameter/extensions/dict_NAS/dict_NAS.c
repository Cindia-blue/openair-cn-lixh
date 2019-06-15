/*
* Copyright (c) 2017 Sprint
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/****************
 Generated By: fdtool enhancements to diafuzzer
 License: same as freeDiameter
****************/


/* 
 * Dictionary definitions of objects specified in NAS.
 */
#include <freeDiameter/extension.h>

#define PROTO_VER "unspecified"
#define GEN_DATE  1530130718.96

const char *nas_proto_ver = PROTO_VER;
const double nas_gen_date = GEN_DATE;

/* The content of this file follows the same structure as dict_base_proto.c */

#define CHECK_dict_new( _type, _data, _parent, _ref )                                     \
{                                                                                         \
    int _ret = fd_dict_new( fd_g_config->cnf_dict, (_type), (_data), (_parent), (_ref) ); \
    if ( _ret != 0 && _ret != EEXIST )                                                    \
       return _ret;                                                                       \
}

#define CHECK_dict_search( _type, _criteria, _what, _result )		\
    CHECK_FCT(  fd_dict_search( fd_g_config->cnf_dict, (_type), (_criteria), (_what), (_result), ENOENT) );

struct local_rules_definition {
    struct dict_avp_request avp_vendor_plus_name;
    enum rule_position	position;
    int 			min;
    int			max;
};

#define RULE_ORDER( _position ) ((((_position) == RULE_FIXED_HEAD) || ((_position) == RULE_FIXED_TAIL)) ? 1 : 0 )

/* Attention! This version of the macro uses AVP_BY_NAME_AND_VENDOR, in contrast to most other copies! */
#define PARSE_loc_rules( _rulearray, _parent) {                                                         \
        int __ar;                                                                                       \
        for (__ar=0; __ar < sizeof(_rulearray) / sizeof((_rulearray)[0]); __ar++) {                     \
                struct dict_rule_data __data = { NULL,                                                  \
                        (_rulearray)[__ar].position,                                                    \
                        0,                                                                              \
                        (_rulearray)[__ar].min,                                                         \
                        (_rulearray)[__ar].max};                                                        \
                __data.rule_order = RULE_ORDER(__data.rule_position);                                   \
                CHECK_FCT(  fd_dict_search(                                                             \
                        fd_g_config->cnf_dict,                                                          \
                        DICT_AVP,                                                                       \
                        AVP_BY_NAME_AND_VENDOR,                                                         \
                        &(_rulearray)[__ar].avp_vendor_plus_name,                                       \
                        &__data.rule_avp, 0 ) );                                                        \
                if ( !__data.rule_avp ) {                                                               \
                        TRACE_DEBUG(INFO, "AVP Not found: '%s'", (_rulearray)[__ar].avp_vendor_plus_name.avp_name);             \
                        return ENOENT;                                                                  \
                }                                                                                       \
                {                                                                                       \
                         int _ret = fd_dict_new( fd_g_config->cnf_dict, DICT_RULE, &(__data), (_parent), NULL ); \
                         if ( _ret != 0 && _ret != EEXIST )      {                                      \
                                TRACE_DEBUG(INFO, "Error on rule with AVP '%s'",                        \
                                            (_rulearray)[__ar].avp_vendor_plus_name.avp_name);          \
                                return EINVAL;                                                          \
                         }                                                                              \
                }                                                                                       \
        }                                                                                               \
}

#define CHECK_vendor_new( _data ) { \
        struct dict_object * vendor_found; \
        if (fd_dict_search(fd_g_config->cnf_dict,DICT_VENDOR,VENDOR_BY_ID,&_data.vendor_id,&vendor_found,ENOENT) == ENOENT) { \
                CHECK_FCT(fd_dict_new(fd_g_config->cnf_dict, DICT_VENDOR, &_data, NULL, NULL)); \
        } \
}

#define enumval_def_u32( _val_, _str_ )		\
    { _str_, 		{ .u32 = _val_ }}

#define enumval_def_os( _len_, _val_, _str_ )				\
    { _str_, 		{ .os = { .data = (unsigned char *)_val_, .len = _len_ }}}


static int dict_nas_load_defs(char * conffile)
{
   TRACE_ENTRY("%p", conffile);
	struct dict_object * app_id1;

	/* Application Section */
	{
	  {
			struct dict_application_data data = { 1, "NAS" };
			CHECK_dict_new( DICT_APPLICATION, &data, NULL, &app_id1)
	  }
	}


   /* AVP section */
   {
		struct dict_object * Address_type;
		struct dict_object * UTF8String_type;
		struct dict_object * DiameterIdentity_type;
		struct dict_object * DiameterURI_type;
		struct dict_object * Time_type;
		struct dict_object * IPFilterRule_type;

		CHECK_dict_search( DICT_TYPE, TYPE_BY_NAME, "Address", &Address_type);
		CHECK_dict_search( DICT_TYPE, TYPE_BY_NAME, "UTF8String", &UTF8String_type);
		CHECK_dict_search( DICT_TYPE, TYPE_BY_NAME, "DiameterIdentity", &DiameterIdentity_type);
		CHECK_dict_search( DICT_TYPE, TYPE_BY_NAME, "DiameterURI", &DiameterURI_type);
		CHECK_dict_search( DICT_TYPE, TYPE_BY_NAME, "Time", &Time_type);
		CHECK_dict_search( DICT_TYPE, TYPE_BY_NAME, "IPFilterRule", &IPFilterRule_type);

	
   }

   /* Commands section */
   {
		/* AA-Request */
		{
			struct dict_object* cmd;
			struct dict_cmd_data data = {
				265,	/* Code */
				"AA-Request",	/* Name */
				CMD_FLAG_REQUEST | CMD_FLAG_ERROR,	/* Fixed flags */
				CMD_FLAG_REQUEST | CMD_FLAG_PROXIABLE,	/* Fixed flag values */
			};

			CHECK_dict_new( DICT_COMMAND, &data , app_id1, &cmd)
		}
		/* AA-Answer */
		{
			struct dict_object* cmd;
			struct dict_cmd_data data = {
				265,	/* Code */
				"AA-Answer",	/* Name */
				CMD_FLAG_REQUEST,	/* Fixed flags */
				CMD_FLAG_PROXIABLE,	/* Fixed flag values */
			};

			CHECK_dict_new( DICT_COMMAND, &data , app_id1, &cmd)
		}

   }

   return 0;
}

static int dict_nas_load_rules(char * conffile)
{
   /* Grouped AVP section */
   {

   }	

   /* Commands section */
   {
	  /* AA-Request */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "AA-Request", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Request-Type"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Identifier"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IPv6-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Port-Limit"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Password"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "State"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Authorization-Lifetime"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Grace-Period"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Session-State"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Callback-Number"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Called-Station-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Calling-Station-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Originating-Line-Info"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Connect-Info"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "CHAP-Auth"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "CHAP-Challenge"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Compression"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Interface-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IPv6-Prefix"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IP-Netmask"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-MTU"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "ARAP-Password"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* AA-Answer */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "AA-Answer", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Request-Type"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Result-Code"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Class"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Re-Auth-Request */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Re-Auth-Request", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Re-Auth-Request-Type"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Identifier"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IPv6-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IP-Address"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Re-Auth-Answer */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Re-Auth-Answer", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Result-Code"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Message"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Reporting-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Failed-AVP"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Host-Usage"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Max-Cache-Time"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Configuration-Token"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Idle-Timeout"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Authorization-Lifetime"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Grace-Period"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Re-Auth-Request-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "State"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Class"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Reply-Message"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Prompt"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Abort-Session-Request */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Abort-Session-Request", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Identifier"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IPv6-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IPv6-Prefix"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Interface-Id"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Abort-Session-Answer */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Abort-Session-Answer", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Result-Code"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "State"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Message"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Reporting-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Failed-AVP"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Host-Usage"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Max-Cache-Time"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Proxy-Info"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Session-Termination-Request */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Session-Termination-Request", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Auth-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Termination-Cause"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Class"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Proxy-Info"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Route-Record"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Session-Termination-Answer */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Session-Termination-Answer", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Result-Code"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Class"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Message"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Reporting-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Failed-AVP"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Host-Usage"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Redirect-Max-Cache-Time"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Proxy-Info"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Accounting-Request */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Accounting-Request", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Record-Type"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Record-Number"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Sub-Session-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Session-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Multi-Session-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Destination-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Event-Timestamp"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Delay-Time"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Identifier"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IPv6-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Class"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Termination-Cause"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Input-Octets"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Input-Packets"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Output-Octets"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Output-Packets"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Authentic"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Auth-Method"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Link-Count"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Session-Time"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Tunnel-Connection"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Tunnel-Packets-Lost"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Callback-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Callback-Number"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Called-Station-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Calling-Station-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Connect-Info"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Originating-Line-Info"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Authorization-Lifetime"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Session-Timeout"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Idle-Timeout"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Port-Limit"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Realtime-Required"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Interim-Interval"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Filter-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Filter-Rule"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "QoS-Filter-Rule"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Appletalk-Link"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Appletalk-Network"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Appletalk-Zone"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Compression"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Interface-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IP-Netmask"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IPv6-Prefix"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IPv6-Pool"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IPv6-Route"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-IPX-Network"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-MTU"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Pool"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Route"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Framed-Routing"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-IP-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-IPv6-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-LAT-Group"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-LAT-Node"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-LAT-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-LAT-Service"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-Service"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Login-TCP-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Tunneling"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Proxy-Info"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Route-Record"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }
	  /* Accounting-Answer */
	  {
		struct dict_object* cmd;
		CHECK_dict_search( DICT_COMMAND, CMD_BY_NAME, "Accounting-Answer", &cmd)
		struct local_rules_definition rules[] =
		{
			{ { .avp_vendor = 0, .avp_name = "Session-Id"}, RULE_FIXED_HEAD, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Result-Code"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Host"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-Realm"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Record-Type"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Record-Number"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Application-Id"}, RULE_REQUIRED, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "User-Name"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Sub-Session-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Session-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Acct-Multi-Session-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Event-Timestamp"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Message"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Error-Reporting-Host"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Failed-AVP"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-AAA-Protocol"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Origin-State-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Identifier"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IP-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-IPv6-Address"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Id"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "NAS-Port-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Service-Type"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Termination-Cause"}, RULE_OPTIONAL, -1, -1 },
			{ { .avp_vendor = 0, .avp_name = "Accounting-Realtime-Required"}, RULE_OPTIONAL, -1, -1 }
		};
		PARSE_loc_rules(rules, cmd);
	  }

   }

   LOG_D( "Extension 'Dictionary definitions for NAS (None)' initialized");
   return 0;
}

int dict_entry(char * conffile)
{
	dict_nas_load_defs(conffile);
	return dict_nas_load_rules(conffile);
}

const char* dict_proto_ver(char * conffile) {
	return nas_proto_ver;
}

const double dict_gen_ts(char * conffile) {
	return nas_gen_date;
}

EXTENSION_ENTRY2("dict_nas", dict_nas_load_defs, dict_nas_load_rules, "dict_rfc7155_avps");


