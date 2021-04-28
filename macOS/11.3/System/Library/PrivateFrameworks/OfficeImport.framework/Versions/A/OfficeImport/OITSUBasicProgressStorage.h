/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OITSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	char mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) char indeterminate; 
-(double)value;
-(void)setValue:(double)arg1 ;
-(char)isIndeterminate;
-(void)setIndeterminate:(char)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
@end

