/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber;

@interface STUsageRequest : NSManagedObject

@property (nonatomic,retain) NSDate * acknowledgedDate; 
@property (nonatomic,retain) NSNumber * forUserDSID; 
@property (nonatomic,retain) NSDate * requestedDate; 
@property (assign,nonatomic) char isBackgroundTask; 
+(id)fetchOrCreateUsageRequestForUser:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateUsageRequestForLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForLocalUsageRequests;
+(id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+(id)fetchOrCreateUsageRequestForUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
@end
