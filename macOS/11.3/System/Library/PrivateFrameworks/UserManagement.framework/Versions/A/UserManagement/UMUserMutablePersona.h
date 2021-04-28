/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UMUserPersona.h>

@class NSString;

@interface UMUserMutablePersona : UMUserPersona

@property (assign,nonatomic) unsigned uid; 
@property (assign,nonatomic) unsigned gid; 
@property (assign,nonatomic) char isEnterprisePersona; 
@property (assign,nonatomic) char isPersonalPersona; 
@property (assign,nonatomic) char isSystemPersona; 
@property (assign,nonatomic) char isDefaultPersona; 
@property (assign,nonatomic) char isGuestPersona; 
@property (assign,nonatomic) char isDataSeparatedPersona; 
@property (assign,nonatomic) char isDisabled; 
@property (nonatomic,copy) NSString * userPersonaUniqueString; 
@property (nonatomic,copy) NSString * userPersonaNickName; 
@property (assign,nonatomic) unsigned long long userPersonaType; 
-(char)commitChanges;
-(char)commitChangesWithError:(id*)arg1 ;
@end

