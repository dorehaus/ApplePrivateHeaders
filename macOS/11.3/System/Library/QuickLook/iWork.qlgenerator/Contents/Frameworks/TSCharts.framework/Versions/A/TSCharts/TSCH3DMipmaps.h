/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class NSData;

@interface TSCH3DMipmaps : NSObject {

	int _width;
	int _height;
	unsigned long long _components;
	NSData* _data;

}

@property (nonatomic,readonly) int width;                                  //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                 //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long components;              //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
+(id)mipmapNameFromImageName:(id)arg1 ;
+(CGSize)optimizedMipmapLevel0Size;
+(CGSize)mipmapSizeForTexturableSize:(CGSize)arg1 ;
+(id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
+(id)mipmapsFromData:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(char)valid;
-(int)width;
-(int)height;
-(unsigned long long)components;
-(char)writeToFile:(id)arg1 ;
-(id)initFromData:(id)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
@end

