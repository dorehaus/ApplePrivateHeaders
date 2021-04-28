/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLDevice;
@class NSDictionary, NSURL;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	char _allowBackgroundGPUComputeSetting;
	char _useWatchSPIForScribble;
	char _allowLowPrecisionAccumulationOnGPU;
	char _enableTestVectorMode;
	char _usePreloadedKey;
	long long _computeUnits;
	id<MTLDevice> _preferredMetalDevice;
	NSDictionary* _parameters;
	NSURL* _rootModelURL;
	long long _profilingOptions;

}

@property (assign) char allowBackgroundGPUComputeSetting;                     //@synthesize allowBackgroundGPUComputeSetting=_allowBackgroundGPUComputeSetting - In the implementation block
@property (assign,nonatomic) char useWatchSPIForScribble;                     //@synthesize useWatchSPIForScribble=_useWatchSPIForScribble - In the implementation block
@property (assign,nonatomic) char allowFloat16AccumulationOnGPU; 
@property (assign) char allowLowPrecisionAccumulationOnGPU;                   //@synthesize allowLowPrecisionAccumulationOnGPU=_allowLowPrecisionAccumulationOnGPU - In the implementation block
@property (assign,nonatomic) char allowBackgroundGPUCompute; 
@property (nonatomic,retain) id<MTLDevice> preferredMTLDevice; 
@property (nonatomic,retain) id<MTLDevice> preferredMetalDevice;              //@synthesize preferredMetalDevice=_preferredMetalDevice - In the implementation block
@property (assign,nonatomic) char enableTestVectorMode;                       //@synthesize enableTestVectorMode=_enableTestVectorMode - In the implementation block
@property (retain) NSDictionary * parameters;                                 //@synthesize parameters=_parameters - In the implementation block
@property (retain) NSURL * rootModelURL;                                      //@synthesize rootModelURL=_rootModelURL - In the implementation block
@property (assign,nonatomic) long long profilingOptions;                      //@synthesize profilingOptions=_profilingOptions - In the implementation block
@property (assign,nonatomic) char usePreloadedKey;                            //@synthesize usePreloadedKey=_usePreloadedKey - In the implementation block
@property (assign) long long computeUnits;                                    //@synthesize computeUnits=_computeUnits - In the implementation block
+(char)supportsSecureCoding;
+(id)defaultConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)computeUnitsToString:(long long)arg1 ;
-(id)initWithComputeUnits:(long long)arg1 ;
-(char)allowFloat16AccumulationOnGPU;
-(void)setAllowFloat16AccumulationOnGPU:(char)arg1 ;
-(id<MTLDevice>)preferredMTLDevice;
-(void)setPreferredMTLDevice:(id<MTLDevice>)arg1 ;
-(char)allowBackgroundGPUCompute;
-(void)setAllowBackgroundGPUCompute:(char)arg1 ;
-(char)isEqualToModelConfiguration:(id)arg1 ;
-(long long)computeUnits;
-(void)setComputeUnits:(long long)arg1 ;
-(char)allowBackgroundGPUComputeSetting;
-(void)setAllowBackgroundGPUComputeSetting:(char)arg1 ;
-(char)useWatchSPIForScribble;
-(void)setUseWatchSPIForScribble:(char)arg1 ;
-(char)allowLowPrecisionAccumulationOnGPU;
-(void)setAllowLowPrecisionAccumulationOnGPU:(char)arg1 ;
-(id<MTLDevice>)preferredMetalDevice;
-(void)setPreferredMetalDevice:(id<MTLDevice>)arg1 ;
-(char)enableTestVectorMode;
-(void)setEnableTestVectorMode:(char)arg1 ;
-(NSURL *)rootModelURL;
-(void)setRootModelURL:(NSURL *)arg1 ;
-(long long)profilingOptions;
-(void)setProfilingOptions:(long long)arg1 ;
-(char)usePreloadedKey;
-(void)setUsePreloadedKey:(char)arg1 ;
@end

