/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAccountDescription.h>

@class NSString, NSNumber, NSURL, ABCDContainer, NSArray;

@interface CNCDLocalAccountDescription : NSObject <CNAccountDescription>

@property (copy,readonly) NSString * identifier; 
@property (readonly) NSNumber * dsid; 
@property (readonly) char isEnabled; 
@property (readonly) char isPersistent; 
@property (copy,readonly) NSURL * baseURL; 
@property (readonly) NSURL * persistentStoreURL; 
@property (readonly) ABCDContainer * containerRepresentation; 
@property (readonly) char isChildAccount; 
@property (copy,readonly) NSArray * childAccounts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localAccountDescription;
-(NSURL *)baseURL;
-(NSString *)identifier;
-(char)isEnabled;
-(NSNumber *)dsid;
-(char)isPersistent;
-(NSArray *)childAccounts;
-(char)isChildAccount;
-(NSURL *)persistentStoreURL;
-(ABCDContainer *)containerRepresentation;
@end

