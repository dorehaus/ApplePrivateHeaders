/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWFormatRequirements.h>

@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements {

	unsigned long long _width;
	unsigned long long _height;
	NSArray* _supportedPixelFormats;
	NSArray* _preferredPixelFormats;
	NSArray* _supportedColorSpaceProperties;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _widthAlignment;
	unsigned long long _heightAlignment;
	NSArray* _supportedCacheModes;
	char _prewireBuffers;
	char _memoryPoolUseAllowed;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSArray * supportedPixelFormats;                        //@synthesize supportedPixelFormats=_supportedPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * preferredPixelFormats;                        //@synthesize preferredPixelFormats=_preferredPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * supportedColorSpaceProperties;                //@synthesize supportedColorSpaceProperties=_supportedColorSpaceProperties - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long widthAlignment;                    //@synthesize widthAlignment=_widthAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long heightAlignment;                   //@synthesize heightAlignment=_heightAlignment - In the implementation block
@property (nonatomic,copy) NSArray * supportedCacheModes;                          //@synthesize supportedCacheModes=_supportedCacheModes - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (assign,nonatomic) char prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) char memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
+(void)initialize;
+(id)cacheModesForOptimizedCPUAccess;
+(id)cacheModesForOptimizedHWAccess;
+(id)cacheModesForOptimizedDisplayAccess;
+(id)cacheModesForCacheProfile:(int)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned)mediaType;
-(NSArray *)supportedPixelFormats;
-(NSDictionary *)pixelBufferAttributes;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)setSupportedCacheModes:(NSArray *)arg1 ;
-(void)setPrewireBuffers:(char)arg1 ;
-(void)setSupportedColorSpaceProperties:(NSArray *)arg1 ;
-(void)setSupportedPixelFormats:(NSArray *)arg1 ;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(void)setHeightAlignment:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRowAlignment;
-(unsigned long long)planeAlignment;
-(unsigned long long)widthAlignment;
-(unsigned long long)heightAlignment;
-(char)prewireBuffers;
-(void)setMemoryPoolUseAllowed:(char)arg1 ;
-(NSArray *)preferredPixelFormats;
-(NSArray *)supportedColorSpaceProperties;
-(NSArray *)supportedCacheModes;
-(Class)formatClass;
-(void)_resolvePixelFormat;
-(void)setPreferredPixelFormats:(NSArray *)arg1 ;
-(void)setWidthAlignment:(unsigned long long)arg1 ;
-(char)memoryPoolUseAllowed;
@end
