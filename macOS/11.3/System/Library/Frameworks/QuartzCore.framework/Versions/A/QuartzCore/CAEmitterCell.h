/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CAPropertyInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CAMediaTiming.h>

@class NSString, NSArray, NSDictionary;

@interface CAEmitterCell : NSObject <NSCopying, CAPropertyInfo, NSSecureCoding, CAMediaTiming> {

	void** _attr[2];
	void* _state;
	unsigned _flags;

}

@property (copy) NSString * particleType; 
@property (assign) double orientationLatitude; 
@property (assign) double orientationLongitude; 
@property (assign) double orientationRange; 
@property (assign) double rotation; 
@property (assign) double rotationRange; 
@property (assign) float mass; 
@property (assign) float massRange; 
@property (copy) NSString * contentsFrameMode; 
@property (assign) unsigned contentsFrameCount; 
@property (assign) unsigned contentsFramesPerRow; 
@property (assign) float contentsFramesPerSecond; 
@property (copy) NSArray * emitterBehaviors; 
@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (assign) float birthRate; 
@property (assign) float lifetime; 
@property (assign) float lifetimeRange; 
@property (assign) double emissionLatitude; 
@property (assign) double emissionLongitude; 
@property (assign) double emissionRange; 
@property (assign) double velocity; 
@property (assign) double velocityRange; 
@property (assign) double xAcceleration; 
@property (assign) double yAcceleration; 
@property (assign) double zAcceleration; 
@property (assign) double scale; 
@property (assign) double scaleRange; 
@property (assign) double scaleSpeed; 
@property (assign) double spin; 
@property (assign) double spinRange; 
@property (assign) CGColorRef color; 
@property (assign) float redRange; 
@property (assign) float greenRange; 
@property (assign) float blueRange; 
@property (assign) float alphaRange; 
@property (assign) float redSpeed; 
@property (assign) float greenSpeed; 
@property (assign) float blueSpeed; 
@property (assign) float alphaSpeed; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (assign) double contentsScale; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (copy) NSArray * emitterCells; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)defaultValueForKey:(id)arg1 ;
+(id)properties;
+(id)emitterCell;
+(id)CA_attributes;
+(id)attributesForKey:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(char)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(char)CA_validateValue:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)emitterBehaviors;
-(id)attributesForKeyPath:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(float)blueSpeed;
-(double)orientationLatitude;
-(double)orientationLongitude;
-(double)orientationRange;
-(double)rotationRange;
-(void)setRotationRange:(double)arg1 ;
-(NSString *)contentsFrameMode;
-(float)contentsFramesPerSecond;
-(unsigned)contentsFramesPerRow;
-(unsigned)contentsFrameCount;
-(float)massRange;
-(NSString *)particleType;
-(void)setContentsFrameMode:(NSString *)arg1 ;
-(void)setContentsFrameCount:(unsigned)arg1 ;
-(void)setContentsFramesPerRow:(unsigned)arg1 ;
-(void)setContentsFramesPerSecond:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(char)isEnabled;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSDictionary *)style;
-(id)valueForKeyPath:(id)arg1 ;
-(id)contents;
-(double)rotation;
-(double)scale;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(double)duration;
-(void)setStyle:(NSDictionary *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setSpeed:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
-(void)setRepeatCount:(float)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(double)repeatDuration;
-(float)repeatCount;
-(double)beginTime;
-(float)speed;
-(char)autoreverses;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(double)contentsScale;
-(void)setBeginTime:(double)arg1 ;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(void)setMass:(float)arg1 ;
-(double)velocity;
-(void)CA_prepareRenderValue;
-(Object*)CA_copyRenderValue;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setRotation:(double)arg1 ;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(void)setVelocity:(double)arg1 ;
-(NSString *)fillMode;
-(float)mass;
-(NSString *)minificationFilter;
-(NSString *)magnificationFilter;
-(double)timeOffset;
-(CGRect)contentsRect;
-(float)lifetime;
-(void)setBirthRate:(float)arg1 ;
-(void)setLifetime:(float)arg1 ;
-(void)setLifetimeRange:(float)arg1 ;
-(void)setParticleType:(NSString *)arg1 ;
-(void)setYAcceleration:(double)arg1 ;
-(void)setOrientationRange:(double)arg1 ;
-(void)setSpin:(double)arg1 ;
-(void)setSpinRange:(double)arg1 ;
-(void)setEmissionRange:(double)arg1 ;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(void)setEmitterBehaviors:(NSArray *)arg1 ;
-(double)spin;
-(void)setRepeatDuration:(double)arg1 ;
-(float)birthRate;
-(void)setVelocityRange:(double)arg1 ;
-(double)velocityRange;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(void)setMassRange:(float)arg1 ;
-(void)setAlphaRange:(float)arg1 ;
-(void)setOrientationLongitude:(double)arg1 ;
-(void)setOrientationLatitude:(double)arg1 ;
-(double)xAcceleration;
-(double)yAcceleration;
-(void)setXAcceleration:(double)arg1 ;
-(NSArray *)emitterCells;
-(float)alphaRange;
-(float)alphaSpeed;
-(void)setAlphaSpeed:(float)arg1 ;
-(float)blueRange;
-(void)setBlueRange:(float)arg1 ;
-(void)setBlueSpeed:(float)arg1 ;
-(double)emissionLatitude;
-(void)setEmissionLatitude:(double)arg1 ;
-(double)emissionLongitude;
-(void)setEmissionLongitude:(double)arg1 ;
-(double)emissionRange;
-(float)greenRange;
-(void)setGreenRange:(float)arg1 ;
-(float)greenSpeed;
-(void)setGreenSpeed:(float)arg1 ;
-(float)lifetimeRange;
-(float)minificationFilterBias;
-(float)redRange;
-(void)setRedRange:(float)arg1 ;
-(float)redSpeed;
-(void)setRedSpeed:(float)arg1 ;
-(double)scaleRange;
-(void)setScaleRange:(double)arg1 ;
-(double)scaleSpeed;
-(void)setScaleSpeed:(double)arg1 ;
-(double)spinRange;
-(double)zAcceleration;
-(void)setZAcceleration:(double)arg1 ;
@end

