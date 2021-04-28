/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CNContainer, CNContactStore, ACAccountStore, CNCache, NSObject;

@interface CNContainerCache : NSObject {

	CNContainer* _primaryiCloudContainer;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	CNCache* _cachedAccounts;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) CNContainer * primaryiCloudContainer;                //@synthesize primaryiCloudContainer=_primaryiCloudContainer - In the implementation block
@property (assign,nonatomic,__weak) CNContactStore * contactStore;                //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) CNCache * cachedAccounts;                            //@synthesize cachedAccounts=_cachedAccounts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)os_log;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CNContainer *)primaryiCloudContainer;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)accountStoreDidChange;
-(void)contactStoreDidChange;
-(void)resetAccountCache;
-(void)resetPrimaryiCloudContainer;
-(id)onWorkQueue_findPrimaryiCloudContainer;
-(id)accountForContainer:(id)arg1 ;
-(CNCache *)cachedAccounts;
-(id)cnAccountForContainer:(id)arg1 ;
-(void)setCachedAccounts:(CNCache *)arg1 ;
-(void)setPrimaryiCloudContainer:(CNContainer *)arg1 ;
@end

