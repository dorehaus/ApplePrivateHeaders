/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzFilters/QuartzFilters-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class QRectObject, QSizeObject, NSString, NSNumber;

@interface QFilterPDFX3Info : NSObject <NSCopying> {

	char _addTrimBox;
	char _addBleedBox;
	char _trapped;
	char _flattenTransparency;
	QRectObject* _trimBox;
	QRectObject* _bleedBox;
	QSizeObject* _transparencyResolution;
	NSString* _outConditionID;
	NSString* _outCondition;
	NSString* _outConditionInfo;
	NSString* _registryName;
	NSNumber* _destProfile;

}

@property (assign) char addTrimBox;                                   //@synthesize addTrimBox=_addTrimBox - In the implementation block
@property (assign) char addBleedBox;                                  //@synthesize addBleedBox=_addBleedBox - In the implementation block
@property (getter=isTrapped) char trapped;                            //@synthesize trapped=_trapped - In the implementation block
@property (assign) char flattenTransparency;                          //@synthesize flattenTransparency=_flattenTransparency - In the implementation block
@property (retain) QRectObject * trimBox;                             //@synthesize trimBox=_trimBox - In the implementation block
@property (retain) QRectObject * bleedBox;                            //@synthesize bleedBox=_bleedBox - In the implementation block
@property (retain) QSizeObject * transparencyResolution;              //@synthesize transparencyResolution=_transparencyResolution - In the implementation block
@property (copy) NSString * outConditionID;                           //@synthesize outConditionID=_outConditionID - In the implementation block
@property (copy) NSString * outCondition;                             //@synthesize outCondition=_outCondition - In the implementation block
@property (copy) NSString * outConditionInfo;                         //@synthesize outConditionInfo=_outConditionInfo - In the implementation block
@property (copy) NSString * registryName;                             //@synthesize registryName=_registryName - In the implementation block
@property (copy) NSNumber * destProfile;                              //@synthesize destProfile=_destProfile - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(NSString *)outConditionID;
-(void)setDestProfile:(NSNumber *)arg1 ;
-(NSNumber *)destProfile;
-(void)setAddTrimBox:(char)arg1 ;
-(void)setAddBleedBox:(char)arg1 ;
-(void)setTrapped:(char)arg1 ;
-(void)setFlattenTransparency:(char)arg1 ;
-(void)setTrimBox:(QRectObject *)arg1 ;
-(void)setBleedBox:(QRectObject *)arg1 ;
-(void)setTransparencyResolution:(QSizeObject *)arg1 ;
-(void)setOutConditionID:(NSString *)arg1 ;
-(void)setOutCondition:(NSString *)arg1 ;
-(void)setOutConditionInfo:(NSString *)arg1 ;
-(void)setRegistryName:(NSString *)arg1 ;
-(char)isTrapped;
-(NSString *)outCondition;
-(NSString *)outConditionInfo;
-(NSString *)registryName;
-(char)addTrimBox;
-(char)addBleedBox;
-(char)flattenTransparency;
-(QRectObject *)trimBox;
-(QRectObject *)bleedBox;
-(QSizeObject *)transparencyResolution;
@end

