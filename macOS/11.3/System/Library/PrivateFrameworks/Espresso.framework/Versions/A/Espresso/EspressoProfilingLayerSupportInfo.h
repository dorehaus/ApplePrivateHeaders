/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface EspressoProfilingLayerSupportInfo : NSObject {

	char _supported;
	char _exists;
	char _has_perf_warning;
	char _internal_layer;
	NSArray* _error_public;
	NSArray* _error_private;
	NSString* _type;

}

@property (retain) NSArray * error_public;               //@synthesize error_public=_error_public - In the implementation block
@property (retain) NSArray * error_private;              //@synthesize error_private=_error_private - In the implementation block
@property (assign) char supported;                       //@synthesize supported=_supported - In the implementation block
@property (assign) char exists;                          //@synthesize exists=_exists - In the implementation block
@property (assign) char has_perf_warning;                //@synthesize has_perf_warning=_has_perf_warning - In the implementation block
@property (assign) char internal_layer;                  //@synthesize internal_layer=_internal_layer - In the implementation block
@property (retain) NSString * type;                      //@synthesize type=_type - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(char)supported;
-(void)setSupported:(char)arg1 ;
-(NSArray *)error_public;
-(NSArray *)error_private;
-(char)exists;
-(char)has_perf_warning;
-(char)internal_layer;
-(void)setError_public:(NSArray *)arg1 ;
-(void)setError_private:(NSArray *)arg1 ;
-(void)setExists:(char)arg1 ;
-(void)setHas_perf_warning:(char)arg1 ;
-(void)setInternal_layer:(char)arg1 ;
@end
