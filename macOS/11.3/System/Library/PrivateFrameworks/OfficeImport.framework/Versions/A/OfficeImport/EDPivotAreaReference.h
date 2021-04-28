/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPivotAreaReference : NSObject {

	BOOL mByPosition;
	BOOL mRelative;
	BOOL mSelected;
	unsigned long long mFieldId;
	unsigned long long mCount;

}
+(id)pivotAreaReference;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)selected;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)fieldId;
-(void)setFieldId:(unsigned long long)arg1 ;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
@end

