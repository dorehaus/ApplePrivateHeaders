/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSTMatrix : NSObject {

	long long fRows;
	long long fColumns;
	double* fValues;

}
+(id)crossProduct:(id)arg1 b:(id)arg2 ;
-(void)dealloc;
-(id)invert;
-(void)resizeWithRows:(long long)arg1 columns:(long long)arg2 ;
-(void)makeIdentity;
-(id)initWitRows:(long long)arg1 columns:(long long)arg2 ;
-(void)addScaledRowToRow:(double)arg1 a:(long long)arg2 b:(long long)arg3 ;
-(void)swapRows:(long long)arg1 b:(long long)arg2 ;
-(void)multiplyRowBy:(long long)arg1 x:(double)arg2 ;
-(double)valueAtRow:(long long)arg1 columns:(long long)arg2 ;
-(void)setValue:(double)arg1 atRow:(long long)arg2 column:(long long)arg3 ;
@end

