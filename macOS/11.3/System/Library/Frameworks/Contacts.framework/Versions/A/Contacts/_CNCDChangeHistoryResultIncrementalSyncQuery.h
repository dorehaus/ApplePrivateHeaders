/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNCDChangeHistoryResultQuery.h>

@interface _CNCDChangeHistoryResultIncrementalSyncQuery : CNCDChangeHistoryResultQuery
+(long long)linkingContactsChangeTypeForPersistentChangeType:(long long)arg1 ;
+(long long)contactsChangeTypeForPersistentChangeType:(long long)arg1 ;
-(void)configureResult:(id)arg1 forTransactions:(id)arg2 ;
-(id)contactChangesForHistoryChanges:(id)arg1 ;
-(id)groupChangesForHistoryChanges:(id)arg1 ;
-(id)contactChangeForHistoryChange:(id)arg1 ;
-(id)unifiedContactChangeForHistoryChange:(id)arg1 ;
-(id)nonUnifiedContactChangeForHistoryChange:(id)arg1 ;
-(id)contactIdentifierForObjectID:(id)arg1 ;
-(id)contactDictionaryForObjectID:(id)arg1 ;
-(id)groupChangeForHistoryChange:(id)arg1 ;
-(id)groupIdentifierForObjectID:(id)arg1 ;
-(id)groupDictionaryForObjectID:(id)arg1 ;
@end

