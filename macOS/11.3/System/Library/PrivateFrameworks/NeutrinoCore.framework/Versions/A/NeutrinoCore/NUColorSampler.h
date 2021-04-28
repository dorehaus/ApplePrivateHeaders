/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@protocol OS_dispatch_queue;
@class NUComposition, NSObject, NUColorSpace, NSString, NUImageDataRequest;

@interface NUColorSampler : NSObject <NUTimeBased> {

	char _shouldCoalesceUpdates;
	NUComposition* _composition;
	NSObject*<OS_dispatch_queue> _responseQueue;
	long long _sampleRadius;
	NUColorSpace* _colorSpace;
	NSString* _name;
	NUImageDataRequest* _request;

}

@property (nonatomic,readonly) NUImageDataRequest * request;                          //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NUComposition * composition;                               //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (assign,nonatomic) long long sampleRadius;                                  //@synthesize sampleRadius=_sampleRadius - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;                               //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign,nonatomic) char shouldCoalesceUpdates;                              //@synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(NUImageDataRequest *)request;
-(SCD_Struct_NU7)time;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setTime:(SCD_Struct_NU7)arg1 ;
-(NUComposition *)composition;
-(id)initWithComposition:(id)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(id)_pipelineFilters;
-(void)setShouldCoalesceUpdates:(char)arg1 ;
-(char)shouldCoalesceUpdates;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithComposition:(id)arg1 responseQueue:(id)arg2 ;
-(void)sampleColorAt:(SCD_Struct_NU8)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureRequest:(id)arg1 forSamplingAtPoint:(SCD_Struct_NU8)arg2 ;
-(long long)sampleRadius;
-(void)setSampleRadius:(long long)arg1 ;
@end

