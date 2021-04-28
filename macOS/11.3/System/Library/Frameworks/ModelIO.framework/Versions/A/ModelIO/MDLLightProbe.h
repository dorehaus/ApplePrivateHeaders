/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLLight.h>

@protocol MDLTransformComponent;
@class MDLTexture, NSMutableData, NSData;

@interface MDLLightProbe : MDLLight {

	MDLTexture* _reflectiveTexture;
	MDLTexture* _irradianceTexture;
	NSMutableData* _sphericalHarmonicsCoefficients;
	id<MDLTransformComponent> _transform;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * reflectiveTexture;                     //@synthesize reflectiveTexture=_reflectiveTexture - In the implementation block
@property (nonatomic,retain,readonly) MDLTexture * irradianceTexture;                     //@synthesize irradianceTexture=_irradianceTexture - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
+(id)lightProbeWithSCNLight:(id)arg1 node:(id)arg2 ;
+(4)calculateIrradianceGradientUsingSamples:(1*)arg1 ofSize:(unsigned long long)arg2 fromSH:(id)arg3 withLevel:(unsigned long long)arg4 ;
+(CGColorRef)sampleSHAt:(id)arg1 usingCoefficients:(unsigned long long)arg2 ;
+(id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6 ;
-(id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2 ;
-(void)generateIrradianceTextureFromReflective;
-(void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1 ;
-(MDLTexture *)reflectiveTexture;
-(MDLTexture *)irradianceTexture;
-(id)transform;
-(void)setTransform:(id)arg1 ;
-(NSData *)sphericalHarmonicsCoefficients;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(unsigned long long)sphericalHarmonicsLevel;
@end

