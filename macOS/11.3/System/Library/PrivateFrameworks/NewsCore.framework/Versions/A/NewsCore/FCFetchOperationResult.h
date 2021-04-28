/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSSet;

@interface FCFetchOperationResult : NSObject {

	id _fetchedObject;
	unsigned long long _status;
	unsigned long long _fetchResult;
	NSError* _error;
	NSSet* _missingObjectDescriptions;

}

@property (nonatomic,copy) NSSet * missingObjectDescriptions;               //@synthesize missingObjectDescriptions=_missingObjectDescriptions - In the implementation block
@property (nonatomic,readonly) id fetchedObject;                            //@synthesize fetchedObject=_fetchedObject - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchResult;              //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) char anyMissingObjects; 
+(id)resultWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 error:(id)arg3 ;
-(NSError *)error;
-(unsigned long long)status;
-(unsigned long long)fetchResult;
-(id)fetchedObject;
-(void)setMissingObjectDescriptions:(NSSet *)arg1 ;
-(NSSet *)missingObjectDescriptions;
-(char)anyMissingObjects;
-(id)initWithStatus:(unsigned long long)arg1 fetchedObject:(id)arg2 fetchResult:(unsigned long long)arg3 error:(id)arg4 ;
@end

