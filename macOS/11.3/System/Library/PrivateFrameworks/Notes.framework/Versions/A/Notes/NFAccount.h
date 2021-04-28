/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICNFMCPersistedAccount.h>

@class NSString, ACAccountCredential, ACAccount, NFFolder, NFTrashFolder, NSArray;

@interface NFAccount : NSManagedObject <ICNFMCPersistedAccount> {

	ACAccount* _internalParentACAccount;

}

@property (readonly) char participatesInInternetAccounts; 
@property (readonly) NSString * folderEntityName; 
@property (nonatomic,retain) ACAccount * internalParentACAccount;                //@synthesize internalParentACAccount=_internalParentACAccount - In the implementation block
@property (assign,nonatomic) char allowInsecureAuthentication; 
@property (assign,nonatomic) char didChooseToMigrate; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (assign,nonatomic) char enabled; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * parentACAccountIdentifier; 
@property (nonatomic,retain) NFFolder * rootFolder; 
@property (nonatomic,retain) NFTrashFolder * trashFolder; 
@property (nonatomic,__weak,readonly) NFFolder * defaultFolder; 
@property (nonatomic,__weak,readonly) NSArray * allFolders; 
@property (nonatomic,readonly) long long accountClassPriority; 
@property (nonatomic,readonly) char isAolAccount; 
@property (nonatomic,readonly) char isICloudAccount; 
@property (nonatomic,readonly) char isYahooAccount; 
@property (nonatomic,copy,readonly) NSString * internetAccountsUID; 
@property (nonatomic,readonly) ACAccount * parentACAccount; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * canonicalEmailAddress; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAccountStore;
+(void)setDefaultAccount:(id)arg1 ;
+(id)accountWithInternetAccountsUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)findAccountForParentACAccount:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_initialDefaultAccountWithContext:(id)arg1 ;
+(id)resetDefaultAccount:(id)arg1 ;
+(id)allEnabledAccountsWithContext:(id)arg1 ;
+(id)allAccountsWithContext:(id)arg1 ;
+(id)accountWithParentACAccountIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)accountWithEmailAddress:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)defaultAccountWithContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingAccountDescription;
+(id)keyPathsForValuesAffectingDefaultFolder;
+(id)keyPathsForValuesAffectingParentACAccount;
-(void)dealloc;
-(NSString *)identifier;
-(ACAccountCredential *)credential;
-(NSString *)username;
-(NSString *)emailAddress;
-(void)awakeFromInsert;
-(NSString *)accountDescription;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(void)awakeFromFetch;
-(char)hasNotes;
-(char)isYahooAccount;
-(NSString *)canonicalEmailAddress;
-(void)setCanonicalEmailAddress:(NSString *)arg1 ;
-(ACAccount *)parentACAccount;
-(NFFolder *)defaultFolder;
-(NSArray *)allFolders;
-(char)participatesInInternetAccounts;
-(long long)accountClassPriority;
-(NSString *)folderEntityName;
-(id)createDefaultFolderInContext:(id)arg1 ;
-(void)accountsFrameworkDidChange:(id)arg1 ;
-(ACAccount *)internalParentACAccount;
-(char)isAolAccount;
-(char)isICloudAccount;
-(NSString *)internetAccountsUID;
-(void)setInternalParentACAccount:(ACAccount *)arg1 ;
@end

