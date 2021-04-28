/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/Versions/A/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TXRArrayElement : NSObject <NSCopying> {

	NSMutableArray* _faces;

}

@property (readonly) NSArray * faces;              //@synthesize faces=_faces - In the implementation block
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(char)arg3 dataSourceProvider:(id)arg4 ;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 dimensions:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 alphaInfo:(char)arg5 cubemap:(id)arg6 ;
-(void)setImage:(id)arg1 atFace:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)faces;
@end
