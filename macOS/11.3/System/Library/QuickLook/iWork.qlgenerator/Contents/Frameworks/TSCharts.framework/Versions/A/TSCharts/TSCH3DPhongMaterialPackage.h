/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DMaterialPackage.h>

@class TSCH3DEmissiveMaterial, TSCH3DDiffuseMaterial, TSCH3DModulateMaterial, TSCH3DSpecularMaterial, TSCH3DShininessMaterial;

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage {

	TSCH3DEmissiveMaterial* _emissive;
	TSCH3DDiffuseMaterial* _diffuse;
	TSCH3DModulateMaterial* _modulate;
	TSCH3DSpecularMaterial* _specular;
	TSCH3DShininessMaterial* _shininess;

}

@property (nonatomic,retain) TSCH3DEmissiveMaterial * emissive;                //@synthesize emissive=_emissive - In the implementation block
@property (nonatomic,retain) TSCH3DDiffuseMaterial * diffuse;                  //@synthesize diffuse=_diffuse - In the implementation block
@property (nonatomic,retain) TSCH3DModulateMaterial * modulate;                //@synthesize modulate=_modulate - In the implementation block
@property (nonatomic,retain) TSCH3DSpecularMaterial * specular;                //@synthesize specular=_specular - In the implementation block
@property (nonatomic,retain) TSCH3DShininessMaterial * shininess;              //@synthesize shininess=_shininess - In the implementation block
+(id)package;
+(id)instanceWithArchive:(const Chart3DPhongMaterialPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)setShininess:(TSCH3DShininessMaterial *)arg1 ;
-(TSCH3DShininessMaterial *)shininess;
-(TSCH3DDiffuseMaterial *)diffuse;
-(TSCH3DSpecularMaterial *)specular;
-(char)hasCompleteData;
-(id)initWithArchive:(const Chart3DPhongMaterialPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DPhongMaterialPackageArchive*)arg1 archiver:(id)arg2 ;
-(TSCH3DEmissiveMaterial *)emissive;
-(TSCH3DModulateMaterial *)modulate;
-(id)materialEnumerator;
-(void)setEmissive:(TSCH3DEmissiveMaterial *)arg1 ;
-(void)setDiffuse:(TSCH3DDiffuseMaterial *)arg1 ;
-(void)setModulate:(TSCH3DModulateMaterial *)arg1 ;
-(void)setSpecular:(TSCH3DSpecularMaterial *)arg1 ;
@end

