/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKDynamicLayerEmitterConfiguration, PKDynamicLayerTransactionEffectConfiguration;

@interface PKDynamicLayerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	char _supported;
	char _parallaxEnabled;
	unsigned long long _version;
	PKDynamicLayerEmitterConfiguration* _backgroundParallaxEmitter;
	PKDynamicLayerEmitterConfiguration* _neutralEmitter;
	PKDynamicLayerEmitterConfiguration* _foregroundParallaxEmitter;
	PKDynamicLayerEmitterConfiguration* _staticOverlayEmitter;
	PKDynamicLayerTransactionEffectConfiguration* _transactionEffect;

}

@property (assign,getter=isSupported,nonatomic) char supported;                                             //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char parallaxEnabled;                                                          //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * backgroundParallaxEmitter;                //@synthesize backgroundParallaxEmitter=_backgroundParallaxEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * neutralEmitter;                           //@synthesize neutralEmitter=_neutralEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * foregroundParallaxEmitter;                //@synthesize foregroundParallaxEmitter=_foregroundParallaxEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * staticOverlayEmitter;                     //@synthesize staticOverlayEmitter=_staticOverlayEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerTransactionEffectConfiguration * transactionEffect;              //@synthesize transactionEffect=_transactionEffect - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setSupported:(char)arg1 ;
-(char)isSupported;
-(char)parallaxEnabled;
-(void)setParallaxEnabled:(char)arg1 ;
-(void)setBackgroundParallaxEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setNeutralEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setForegroundParallaxEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setStaticOverlayEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setTransactionEffect:(PKDynamicLayerTransactionEffectConfiguration *)arg1 ;
-(PKDynamicLayerEmitterConfiguration *)backgroundParallaxEmitter;
-(PKDynamicLayerEmitterConfiguration *)neutralEmitter;
-(PKDynamicLayerEmitterConfiguration *)foregroundParallaxEmitter;
-(PKDynamicLayerEmitterConfiguration *)staticOverlayEmitter;
-(PKDynamicLayerTransactionEffectConfiguration *)transactionEffect;
@end

