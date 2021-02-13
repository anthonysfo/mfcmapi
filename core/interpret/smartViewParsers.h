#pragma once

namespace smartview
{
	// After 'No Parsing', these are in alphabetical order
	static SMARTVIEW_PARSER_TYPE_ARRAY_ENTRY g_SmartViewParserTypeArray[] = {
		{parserType::NOPARSING, L"Choose Smart View Parser"}, // STRING_OK
		{parserType::ADDITIONALRENENTRYIDSEX, L"Additional Ren Entry IDs Ex"}, // STRING_OK
		{parserType::APPOINTMENTRECURRENCEPATTERN, L"Appointment Recurrence Pattern"}, // STRING_OK
		{parserType::CONVERSATIONINDEX, L"Conversation Index"}, // STRING_OK
		{parserType::ENTRYID, L"Entry Id"}, // STRING_OK
		{parserType::ENTRYLIST, L"Entry List"}, // STRING_OK
		{parserType::EXTENDEDFOLDERFLAGS, L"Extended Folder Flags"}, // STRING_OK
		{parserType::EXTENDEDRULECONDITION, L"Extended Rule Condition"}, // STRING_OK
		{parserType::FLATENTRYLIST, L"Flat Entry List"}, // STRING_OK
		{parserType::FOLDERUSERFIELDS, L"Folder User Fields Stream"}, // STRING_OK
		{parserType::GLOBALOBJECTID, L"Global Object Id"}, // STRING_OK
		{parserType::PROPERTIES, L"Property"}, // STRING_OK
		{parserType::PROPERTYDEFINITIONSTREAM, L"Property Definition Stream"}, // STRING_OK
		{parserType::RECIPIENTROWSTREAM, L"Recipient Row Stream"}, // STRING_OK
		{parserType::RECURRENCEPATTERN, L"Recurrence Pattern"}, // STRING_OK
		{parserType::REPORTTAG, L"Report Tag"}, // STRING_OK
		{parserType::RESTRICTION, L"Restriction"}, // STRING_OK
		{parserType::RULECONDITION, L"Rule Condition"}, // STRING_OK
		{parserType::SEARCHFOLDERDEFINITION, L"Search Folder Definition"}, // STRING_OK
		{parserType::SECURITYDESCRIPTOR, L"Security Descriptor"}, // STRING_OK
		{parserType::SID, L"SID"}, // STRING_OK
		{parserType::TASKASSIGNERS, L"Task Assigners"}, // STRING_OK
		{parserType::TIMEZONE, L"Time Zone"}, // STRING_OK
		{parserType::TIMEZONEDEFINITION, L"Time Zone Definition"}, // STRING_OK
		{parserType::WEBVIEWPERSISTSTREAM, L"Web View Persistence Object Stream"}, // STRING_OK
		{parserType::NICKNAMECACHE, L"Nickname Cache"}, // STRING_OK
		{parserType::ENCODEENTRYID, L"Encode Entry ID"}, // STRING_OK
		{parserType::DECODEENTRYID, L"Decode Entry ID"}, // STRING_OK
		{parserType::VERBSTREAM, L"Verb Stream"}, // STRING_OK
		{parserType::TOMBSTONE, L"Tombstone"}, // STRING_OK
		{parserType::PCL, L"Predecessor Change List"}, // STRING_OK
		{parserType::FBSECURITYDESCRIPTOR, L"Free Busy Security Descriptor"}, // STRING_OK
		{parserType::XID, L"XID"}, // STRING_OK
		{parserType::RULEACTION, L"Rule Action"}, // STRING_OK
		{parserType::EXTENDEDRULEACTION, L"Extended Rule Action"}, // STRING_OK
		{parserType::SWAPPEDTODO, L"Swapped ToDo"}, // STRING_OK
	};

	static SMARTVIEW_PARSER_ARRAY_ENTRY g_SmartViewParserArray[] = {
		// clang-format off
		BINARY_STRUCTURE_ENTRY(PR_REPORT_TAG, parserType::REPORTTAG)
		BINARY_STRUCTURE_ENTRY(PR_RECEIVED_BY_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_SENT_REPRESENTING_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_RCVD_REPRESENTING_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_REPORT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_READ_RECEIPT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ORIGINAL_AUTHOR_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_REPLY_RECIPIENT_ENTRIES, parserType::FLATENTRYLIST)
		BINARY_STRUCTURE_ENTRY(PR_ORIGINAL_SENDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ORIGINAL_SENT_REPRESENTING_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_CONVERSATION_INDEX, parserType::CONVERSATIONINDEX)
		BINARY_STRUCTURE_ENTRY(PR_SENDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_PARENT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_SENTMAIL_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_NT_SECURITY_DESCRIPTOR, parserType::SECURITYDESCRIPTOR)
		BINARY_STRUCTURE_ENTRY(PR_CREATOR_SID, parserType::SID)
		BINARY_STRUCTURE_ENTRY(PR_LAST_MODIFIER_SID, parserType::SID)
		BINARY_STRUCTURE_ENTRY(PR_EXTENDED_RULE_ACTIONS, parserType::EXTENDEDRULEACTION)
		BINARY_STRUCTURE_ENTRY(PR_EXTENDED_RULE_MSG_CONDITION, parserType::EXTENDEDRULECONDITION)
		BINARY_STRUCTURE_ENTRY(PR_FREEBUSY_NT_SECURITY_DESCRIPTOR, parserType::FBSECURITYDESCRIPTOR)
		BINARY_STRUCTURE_ENTRY(PR_STORE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ORIGINALLY_INTENDED_RECIP_ENTRYID, parserType::ENTRYID)
		MV_BINARY_STRUCTURE_ENTRY(PR_CONFLICT_ITEMS, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_TARGET_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_SUBTREE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_OUTBOX_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_WASTEBASKET_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_SENTMAIL_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_VIEWS_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_COMMON_VIEWS_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_FINDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_DEFAULT_VIEW_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_APPOINTMENT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_CONTACT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_JOURNAL_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_NOTE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_TASK_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_REM_ONLINE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_REM_OFFLINE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_DRAFTS_ENTRYID, parserType::ENTRYID)
		MV_BINARY_STRUCTURE_ENTRY(PR_ADDITIONAL_REN_ENTRYIDS, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ADDITIONAL_REN_ENTRYIDS_EX, parserType::ADDITIONALRENENTRYIDSEX)
		BINARY_STRUCTURE_ENTRY(PR_EXTENDED_FOLDER_FLAGS, parserType::EXTENDEDFOLDERFLAGS)
		BINARY_STRUCTURE_ENTRY(PR_FOLDER_WEBVIEWINFO, parserType::WEBVIEWPERSISTSTREAM)
		BINARY_STRUCTURE_ENTRY(PR_USERFIELDS, parserType::FOLDERUSERFIELDS)
		MV_BINARY_STRUCTURE_ENTRY(PR_FREEBUSY_ENTRYIDS, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ALTERNATE_RECIPIENT, parserType::FLATENTRYLIST)
		BINARY_STRUCTURE_ENTRY(PR_ORIGINAL_ENTRYID, parserType::ENTRYID)
		MV_BINARY_STRUCTURE_ENTRY(PR_AB_SEARCH_PATH, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IDENTITY_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_OWN_STORE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_HEADER_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_CONFLICT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_MOVE_TO_STORE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_MOVE_TO_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_CREATOR_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_LAST_MODIFIER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_RECIPIENT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_USER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_MAILBOX_OWNER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_SCHEDULE_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_DAF_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_NON_IPM_SUBTREE_ENTRYID, parserType::ENTRYID)
		MV_BINARY_STRUCTURE_ENTRY(PR_CONTAB_FOLDER_ENTRYIDS, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_EFORMS_REGISTRY_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_SPLUS_FREE_BUSY_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_OFFLINE_ADDRBOOK_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_EFORMS_FOR_LOCALE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_FREE_BUSY_FOR_LOCAL_SITE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ADDRBOOK_FOR_LOCAL_SITE_ENTRYID, parserType::ENTRYID)
		MV_BINARY_STRUCTURE_ENTRY(PR_CONTAB_STORE_ENTRYIDS, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_OFFLINE_MESSAGE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_GW_MTSIN_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_GW_MTSOUT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_FAVORITES_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_IPM_PUBLIC_FOLDERS_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_SYS_CONFIG_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ADDRESS_BOOK_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_PUBLIC_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_DAM_ORIGINAL_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_RULE_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ACTIVE_USER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_ORIGINATOR_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_REPORT_DESTINATION_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_LONGTERM_ENTRYID_FROM_TABLE, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_EVENTS_ROOT_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_NNTP_ARTICLE_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_NEWSGROUP_ROOT_FOLDER_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_WLINK_AB_EXSTOREEID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_WLINK_ABEID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_WLINK_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_WLINK_STORE_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_WB_SF_DEFINITION, parserType::SEARCHFOLDERDEFINITION)
		MV_BINARY_STRUCTURE_ENTRY(PR_SCHDINFO_DELEGATE_ENTRYIDS, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_EMS_AB_PARENT_ENTRYID, parserType::ENTRYID)
		BINARY_STRUCTURE_ENTRY(PR_SCHDINFO_APPT_TOMBSTONE, parserType::TOMBSTONE)
		BINARY_STRUCTURE_ENTRY(PR_PREDECESSOR_CHANGE_LIST, parserType::PCL)
		BINARY_STRUCTURE_ENTRY(PR_CHANGE_KEY, parserType::XID)
		BINARY_STRUCTURE_ENTRY(PR_SWAPPED_TODO_DATA, parserType::SWAPPEDTODO)

		NAMEDPROP_BINARY_STRUCTURE_ENTRY(LID_GLOBAL_OBJID, PSETID_Meeting, parserType::GLOBALOBJECTID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(LID_CLEAN_GLOBAL_OBJID, PSETID_Meeting, parserType::GLOBALOBJECTID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSelectedOriginalEntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidAnniversaryEventEID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_MV_BINARY_STRUCTURE_ENTRY(dispidDLOneOffMembers, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_MV_BINARY_STRUCTURE_ENTRY(dispidDLMembers, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidEmail1OriginalEntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidEmail2OriginalEntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidEmail3OriginalEntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidFax1EntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidFax2EntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidFax3EntryID, PSETID_Address, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidTaskRecur, PSETID_Task, parserType::RECURRENCEPATTERN)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidTaskMyDelegators, PSETID_Task, parserType::TASKASSIGNERS)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidApptRecur, PSETID_Appointment, parserType::APPOINTMENTRECURRENCEPATTERN)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidTimeZoneStruct, PSETID_Appointment, parserType::TIMEZONE)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidOrigStoreEid, PSETID_Appointment, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidApptUnsendableRecips, PSETID_Appointment, parserType::RECIPIENTROWSTREAM)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidApptTZDefStartDisplay, PSETID_Appointment, parserType::TIMEZONEDEFINITION)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidApptTZDefEndDisplay, PSETID_Appointment, parserType::TIMEZONEDEFINITION)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidApptTZDefRecur, PSETID_Appointment, parserType::TIMEZONEDEFINITION)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidForwardNotificationRecipients, PSETID_Appointment, parserType::RECIPIENTROWSTREAM)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidPropDefStream, PSETID_Common, parserType::PROPERTYDEFINITIONSTREAM)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidContactLinkEntry, PSETID_Common, parserType::FLATENTRYLIST)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidReferenceEID, PSETID_Common, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSharingInitiatorEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSharingFolderEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSharingOriginalMessageEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSharingBindingEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSharingIndexEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidSharingParentBindingEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidConvActionMoveFolderEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidConvActionMoveStoreEid, PSETID_Sharing, parserType::ENTRYID)
		NAMEDPROP_BINARY_STRUCTURE_ENTRY(dispidVerbStream, PSETID_Common, parserType::VERBSTREAM)

		BINARY_STRUCTURE_ENTRY(PR_RULE_ID, parserType::PTI8)
		BINARY_STRUCTURE_ENTRY(PidTagFolderId, parserType::SFIDMID)
		BINARY_STRUCTURE_ENTRY(PidTagMid, parserType::SFIDMID)
		BINARY_STRUCTURE_ENTRY(PR_WB_SF_LAST_USED, parserType::LONGRTIME)
		BINARY_STRUCTURE_ENTRY(PR_WB_SF_EXPIRATION, parserType::LONGRTIME)
		BINARY_STRUCTURE_ENTRY(PR_FREEBUSY_PUBLISH_START, parserType::LONGRTIME)
		BINARY_STRUCTURE_ENTRY(PR_FREEBUSY_PUBLISH_END, parserType::LONGRTIME)
		// clang-format on
	};
} // namespace smartview