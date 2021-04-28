/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UMUser.h>

@class NSString, NSURL, NSDate, NSArray, NSError;

@interface UMMutableUser : UMUser

@property (assign,nonatomic) unsigned uid; 
@property (assign,nonatomic) unsigned gid; 
@property (nonatomic,copy) NSString * alternateDSID; 
@property (nonatomic,copy) NSURL * homeDirectoryURL; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSURL * photoURL; 
@property (nonatomic,copy) NSString * userAuxiliaryString; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * lastLoginDate; 
@property (nonatomic,copy) NSDate * lastRemoteAuthDate; 
@property (assign,nonatomic) unsigned long long passcodeType; 
@property (assign,nonatomic) char isLoginUser; 
@property (assign,nonatomic) char isAuditor; 
@property (assign,nonatomic) char isDisabled; 
@property (assign,nonatomic) char isTransientUser; 
@property (assign,nonatomic) unsigned long long passcodeLockGracePeriod; 
@property (nonatomic,copy) NSArray * languages; 
@property (assign,nonatomic) char hasManagedCredentials; 
@property (assign,nonatomic) unsigned long long dataQuota; 
@property (assign,nonatomic) unsigned long long dataUsed; 
@property (assign,nonatomic) char hasDataToSync; 
@property (nonatomic,retain) NSError * errorCausingLogout; 
-(char)commitChanges;
-(char)commitChangesWithError:(id*)arg1 ;
@end

