/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class CIImage, NSArray, NSString;

@interface SCNRenderTarget : NSObject {

	SCD_Struct_SC56 _description;
	 _size;
	unsigned long long _arrayLength;
	CIImage* _ciImage;
	NSArray* _sliceTextures;
	id _texture;
	NSString* _name;
	long long _referenceCount;
	long long _timeStamp;

}

@property (nonatomic,retain) id texture;                                      //@synthesize texture=_texture - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long referenceCount;                        //@synthesize referenceCount=_referenceCount - In the implementation block
@property (assign,nonatomic) long long timeStamp;                             //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) char viewportDependant; 
@property (nonatomic,readonly) unsigned char renderBufferFormat; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)texture;
-(void)setTexture:(id)arg1 ;
-(long long)timeStamp;
-(void)setTimeStamp:(long long)arg1 ;
-(long long)referenceCount;
-(id)ciImage;
-(id)initWithDescription:(SCD_Struct_SC56*)arg1 size:(unsigned long long)arg2 ;
-(char)viewportDependant;
-(unsigned char)renderBufferFormat;
-(char)matchesDescription:(SCD_Struct_SC56*)arg1 size:(unsigned long long)arg2 ;
-(id)textureForSliceIndex:(unsigned long long)arg1 ;
-(void)setReferenceCount:(long long)arg1 ;
@end

