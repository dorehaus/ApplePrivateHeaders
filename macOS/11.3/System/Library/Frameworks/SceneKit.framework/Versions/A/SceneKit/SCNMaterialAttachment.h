/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setSize:(CGSize)arg1 ;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
@end
