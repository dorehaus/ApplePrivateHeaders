/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKLinkedListNode.h>

@class IKCacheNode;

@interface IKCacheVRamNode : IKLinkedListNode {

	IKCacheNode* _parent;
	unsigned _session;
	unsigned _memoryUsage;
	unsigned _packerID;
	CGRect _textureRect;

}
-(void)willDie;
-(unsigned)packerID;
-(void)setPackerID:(unsigned)arg1 ;
-(void)setTextureRect:(CGRect)arg1 ;
-(void)setMemoryUsage:(unsigned)arg1 ;
-(id)parent;
-(unsigned)session;
-(void)setSession:(unsigned)arg1 ;
-(void)setParent:(id)arg1 ;
-(char)packed;
-(CGRect)textureRect;
-(unsigned)memoryUsage;
@end

