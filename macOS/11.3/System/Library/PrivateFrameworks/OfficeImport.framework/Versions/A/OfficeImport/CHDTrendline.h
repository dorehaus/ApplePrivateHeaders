/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADGraphicProperties, CHDTrendlineLabel, EDString;

@interface CHDTrendline : NSObject {

	BOOL mDisplayEquation;
	BOOL mDisplayRSquaredValue;
	double mBackward;
	double mForward;
	double mInterceptYAxis;
	int mPolynomialOrder;
	long long mMovingAveragePeriod;
	int mType;
	OADGraphicProperties* mGraphicProperties;
	CHDTrendlineLabel* mLabel;
	EDString* mName;

}
+(id)trendline;
-(id)description;
-(id)init;
-(id)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setName:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(double)forward;
-(double)backward;
-(id)graphicProperties;
-(void)setGraphicProperties:(id)arg1 ;
-(BOOL)isDisplayEquation;
-(void)setDisplayEquation:(BOOL)arg1 ;
-(BOOL)isDisplayRSquaredValue;
-(void)setDisplayRSquaredValue:(BOOL)arg1 ;
-(void)setBackward:(double)arg1 ;
-(void)setForward:(double)arg1 ;
-(double)interceptYAxis;
-(void)setInterceptYAxis:(double)arg1 ;
-(int)polynomialOrder;
-(void)setPolynomialOrder:(int)arg1 ;
-(long long)movingAveragePeriod;
-(void)setMovingAveragePeriod:(long long)arg1 ;
-(id)defaultNameWithSeriesName:(id)arg1 ;
@end

