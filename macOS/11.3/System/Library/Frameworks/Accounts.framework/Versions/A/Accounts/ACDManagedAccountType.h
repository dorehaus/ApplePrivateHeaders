/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet;

@interface ACDManagedAccountType : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * supportsMultipleAccounts; 
@property (nonatomic,retain) NSString * accountTypeDescription; 
@property (nonatomic,retain) NSString * credentialProtectionPolicy; 
@property (nonatomic,retain) NSNumber * supportsAuthentication; 
@property (nonatomic,retain) NSNumber * visibility; 
@property (nonatomic,retain) NSString * credentialType; 
@property (nonatomic,retain) NSString * owningBundleID; 
@property (nonatomic,retain) NSSet * supportedDataclasses; 
@property (nonatomic,retain) NSSet * permission; 
@property (nonatomic,retain) NSSet * accounts; 
@property (nonatomic,retain) NSSet * accessKeys; 
@property (nonatomic,retain) NSSet * syncableDataclasses; 
@property (nonatomic,retain) NSNumber * obsolete; 
-(id)description;
@end

