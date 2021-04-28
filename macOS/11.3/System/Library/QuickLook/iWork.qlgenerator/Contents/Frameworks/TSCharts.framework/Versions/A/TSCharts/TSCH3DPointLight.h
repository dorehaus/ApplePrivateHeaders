/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DLight.h>
#import <TSCharts/TSCH3DLightPositionable.h>

@class TSCH3DVector;

@interface TSCH3DPointLight : TSCH3DLight <TSCH3DLightPositionable> {

	TSCH3DVector* _position;

}

@property (assign,nonatomic) tvec3<float> position; 
+(id)instanceWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
+(Class)effectClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(tvec3<float>)position;
-(void)setPosition:(tvec3<float>)arg1 ;
-(id)initWithArchive:(const Chart3DLightArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DLightArchive*)arg1 archiver:(id)arg2 ;
@end

