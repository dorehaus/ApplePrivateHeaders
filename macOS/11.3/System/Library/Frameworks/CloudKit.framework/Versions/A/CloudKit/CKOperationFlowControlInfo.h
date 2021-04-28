/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSDate;

@interface CKOperationFlowControlInfo : NSObject {

	NSError* _lastError;
	NSDate* _flowControlEndDate;

}

@property (nonatomic,retain) NSError * lastError;                      //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSDate * flowControlEndDate;              //@synthesize flowControlEndDate=_flowControlEndDate - In the implementation block
+(id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2 ;
-(void)setFlowControlEndDate:(NSDate *)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(NSDate *)flowControlEndDate;
@end

