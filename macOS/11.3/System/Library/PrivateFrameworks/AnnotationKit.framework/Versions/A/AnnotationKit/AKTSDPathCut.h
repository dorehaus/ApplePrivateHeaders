/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKTSDPathCut : NSObject {

	long long mSegment;
	double mT;
	double mSkew;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double skew; 
-(id)description;
-(long long)segment;
-(double)t;
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3 ;
-(double)skew;
@end

