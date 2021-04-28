/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject {

	char _unique;
	char _omit;
	double _estimatedRows;
	double _estimatedCost;

}

@property (assign,nonatomic) double estimatedRows;              //@synthesize estimatedRows=_estimatedRows - In the implementation block
@property (assign,nonatomic) double estimatedCost;              //@synthesize estimatedCost=_estimatedCost - In the implementation block
@property (assign,nonatomic) char unique;                       //@synthesize unique=_unique - In the implementation block
@property (assign,nonatomic) char omit;                         //@synthesize omit=_omit - In the implementation block
-(void)setUnique:(char)arg1 ;
-(char)unique;
-(double)estimatedRows;
-(double)estimatedCost;
-(char)omit;
-(id)initWithEstimatedRows:(double)arg1 estimatedCost:(double)arg2 unique:(char)arg3 omit:(char)arg4 ;
-(void)setEstimatedRows:(double)arg1 ;
-(void)setEstimatedCost:(double)arg1 ;
-(void)setOmit:(char)arg1 ;
@end

