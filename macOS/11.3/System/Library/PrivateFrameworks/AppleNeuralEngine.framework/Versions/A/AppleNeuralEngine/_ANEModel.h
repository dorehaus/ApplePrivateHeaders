/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/Versions/A/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary, _ANEProgramForEvaluation;

@interface _ANEModel : NSObject <NSCopying, NSSecureCoding> {

	char _queueDepth;
	unsigned _perfStatsMask;
	os_unfair_lock_s _l;
	NSURL* _modelURL;
	NSString* _key;
	unsigned long long _string_id;
	unsigned long long _programHandle;
	unsigned long long _intermediateBufferHandle;
	NSDictionary* _modelAttributes;
	_ANEProgramForEvaluation* _program;

}

@property (nonatomic,retain) NSDictionary * modelAttributes;                           //@synthesize modelAttributes=_modelAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                         //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) char queueDepth;                                          //@synthesize queueDepth=_queueDepth - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateBufferHandle;              //@synthesize intermediateBufferHandle=_intermediateBufferHandle - In the implementation block
@property (assign,l,nonatomic) os_unfair_lock_s l;                                     //@synthesize l=_l - In the implementation block
@property (nonatomic,retain) _ANEProgramForEvaluation * program;                       //@synthesize program=_program - In the implementation block
@property (assign,nonatomic) unsigned perfStatsMask;                                   //@synthesize perfStatsMask=_perfStatsMask - In the implementation block
@property (nonatomic,readonly) NSURL * modelURL;                                       //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long string_id;                           //@synthesize string_id=_string_id - In the implementation block
+(id)new;
+(char)supportsSecureCoding;
+(id)sandboxExtensionPathsForModelURL:(id)arg1 ;
+(id)modelAtURL:(id)arg1 key:(id)arg2 ;
+(id)modelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(NSString *)key;
-(NSURL *)modelURL;
-(os_unfair_lock_s)l;
-(void)setL:(os_unfair_lock_s)arg1 ;
-(unsigned long long)intermediateBufferHandle;
-(NSDictionary *)modelAttributes;
-(void)setProgram:(_ANEProgramForEvaluation *)arg1 ;
-(_ANEProgramForEvaluation *)program;
-(unsigned long long)programHandle;
-(char)queueDepth;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(void)setIntermediateBufferHandle:(unsigned long long)arg1 ;
-(unsigned long long)string_id;
-(unsigned)perfStatsMask;
-(id)initWithModelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3 ;
-(void)setModelAttributes:(NSDictionary *)arg1 ;
-(void)setQueueDepth:(char)arg1 ;
-(char)isEqualToModel:(id)arg1 ;
-(void)updateModelAttributes:(id)arg1 ;
-(void)updateModelAttributes:(id)arg1 programHandle:(unsigned long long)arg2 intermediateBufferHandle:(unsigned long long)arg3 queueDepth:(char)arg4 ;
-(id)keyForBundleID:(id)arg1 ;
-(void)setPerfStatsMask:(unsigned)arg1 ;
@end

