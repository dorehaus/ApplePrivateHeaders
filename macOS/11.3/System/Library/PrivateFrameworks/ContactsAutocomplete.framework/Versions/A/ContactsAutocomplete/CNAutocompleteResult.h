/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNAutocompleteNameComponents, CNAutocompleteResultValue, NSDictionary, NSArray, NSNumber;

@interface CNAutocompleteResult : NSObject {

	NSString* _displayName;
	char _hasPreferredDomain;
	char _hasPrefixMatch;
	unsigned long long _sourceType;
	CNAutocompleteNameComponents* _nameComponents;
	NSString* _identifier;
	CNAutocompleteResultValue* _value;
	NSDictionary* _userInfo;
	NSString* _lastSendingAddress;
	NSString* _descriptionMemo;
	/*^block*/id _membersProvider;
	/*^block*/id _contactProvider;
	NSArray* _diagnosticLogs;
	/*^block*/id _ignoreResultBlock;
	long long _resultType;
	NSNumber* _recentsIdentifier;

}

@property (copy,readonly) NSString * contactIdentifier; 
@property (copy,readonly) NSString * groupIdentifier; 
@property (copy,readonly) id address; 
@property (readonly) long long addressType; 
@property (copy,readonly) NSArray * userInfos; 
@property (assign) long long resultType;                                     //@synthesize resultType=_resultType - In the implementation block
@property (copy) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (retain) CNAutocompleteResultValue * value;                        //@synthesize value=_value - In the implementation block
@property (copy) CNAutocompleteNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (copy) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSString * lastSendingAddress;                              //@synthesize lastSendingAddress=_lastSendingAddress - In the implementation block
@property (assign) char hasPreferredDomain;                                  //@synthesize hasPreferredDomain=_hasPreferredDomain - In the implementation block
@property (assign) unsigned long long sourceType;                            //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,copy) id contactProvider;                               //@synthesize contactProvider=_contactProvider - In the implementation block
@property (nonatomic,copy) id membersProvider;                               //@synthesize membersProvider=_membersProvider - In the implementation block
@property (nonatomic,copy) NSArray * diagnosticLogs;                         //@synthesize diagnosticLogs=_diagnosticLogs - In the implementation block
@property (nonatomic,retain) NSNumber * recentsIdentifier;                   //@synthesize recentsIdentifier=_recentsIdentifier - In the implementation block
@property (nonatomic,copy) id ignoreResultBlock;                             //@synthesize ignoreResultBlock=_ignoreResultBlock - In the implementation block
+(unsigned long long)category;
+(id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(/*^block*/id)arg5 userInfo:(id)arg6 ;
+(id)comparators;
+(char)isSourceTypeConsideredSuggestion:(unsigned long long)arg1 ;
+(id)localeForHashing;
+(id)resultWithDisplayName:(id)arg1 ;
+(id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 identifier:(id)arg4 ;
+(id)groupResultWithDisplayName:(id)arg1 identifier:(id)arg2 ;
+(id)contactStoreForFetchingFullContacts;
+(id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 addressType:(long long)arg5 identifier:(id)arg6 contactProvider:(/*^block*/id)arg7 groupMembersProvider:(/*^block*/id)arg8 userInfo:(id)arg9 ;
+(id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 ;
+(id)calDAVResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(/*^block*/id)arg5 ;
+(id)messagesResultWithAddress:(id)arg1 displayName:(id)arg2 nameComponents:(id)arg3 resultType:(long long)arg4 groupMembersProvider:(/*^block*/id)arg5 userInfo:(id)arg6 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSDictionary *)userInfo;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(CNAutocompleteResultValue *)value;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setValue:(CNAutocompleteResultValue *)arg1 ;
-(id)address;
-(NSString *)groupIdentifier;
-(long long)resultType;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setResultType:(long long)arg1 ;
-(NSString *)contactIdentifier;
-(CNAutocompleteNameComponents *)nameComponents;
-(void)setNameComponents:(CNAutocompleteNameComponents *)arg1 ;
-(long long)addressType;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(NSString *)lastSendingAddress;
-(void)setLastSendingAddress:(NSString *)arg1 ;
-(id)contactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(void)addDiagnosticLog:(/*^block*/id)arg1 ;
-(id)ignoreResultBlock;
-(void)setContactProvider:(id)arg1 ;
-(void)setMembersProvider:(id)arg1 ;
-(void)setRecentsIdentifier:(NSNumber *)arg1 ;
-(void)setIgnoreResultBlock:(id)arg1 ;
-(id)members:(id*)arg1 ;
-(void)updateUsingInformationFromRelatedResult:(id)arg1 ;
-(void)addDiagnosticLogFuture:(id)arg1 ;
-(long long)compare:(id)arg1 withPriorityComparator:(/*^block*/id)arg2 ;
-(id)stringForHashing;
-(char)hasPreferredDomain;
-(id)resultTypeDescription;
-(id)sourceTypeDescription;
-(id)contactProvider;
-(id)membersProvider;
-(NSArray *)diagnosticLogs;
-(void)setDiagnosticLogs:(NSArray *)arg1 ;
-(id)diagnosticLog;
-(void)setHasPreferredDomain:(char)arg1 ;
-(NSNumber *)recentsIdentifier;
-(NSArray *)userInfos;
@end

