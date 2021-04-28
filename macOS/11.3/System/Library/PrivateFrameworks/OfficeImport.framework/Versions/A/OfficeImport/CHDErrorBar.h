/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject {

	CHDChart* mChart;
	double mValue;
	int mType;
	int mValueType;
	int mDirection;
	BOOL mNoEndCap;
	CHDData* mMinusValues;
	CHDData* mPlusValues;
	OADGraphicProperties* mGraphicProperties;

}
+(id)errorBarWithChart:(id)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)value;
-(void)setValue:(double)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setNoEndCap:(BOOL)arg1 ;
-(void)setPlusValues:(id)arg1 ;
-(void)setMinusValues:(id)arg1 ;
-(BOOL)isNoEndCap;
-(id)minusValues;
-(id)plusValues;
@end
