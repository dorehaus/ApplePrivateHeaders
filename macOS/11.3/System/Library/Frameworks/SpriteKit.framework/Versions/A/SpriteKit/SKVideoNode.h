/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, NSURL, AVPlayer;

@interface SKVideoNode : SKNode {

	SKCVideoNode* _skcVideoNode;
	char _isUsingKVO;
	NSString* _videoFileName;
	NSURL* _videoFileURL;
	AVPlayer* _player;

}

@property (nonatomic,retain) AVPlayer * _player; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGPoint anchorPoint; 
+(char)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)videoNodeWithFileNamed:(id)arg1 ;
+(id)videoNodeWithURL:(id)arg1 ;
+(id)videoNodeWithVideoFileNamed:(id)arg1 ;
+(id)videoNodeWithVideoURL:(id)arg1 ;
+(id)videoNodeWithAVPlayer:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)setSize:(CGSize)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessibilityLabel;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)anchorPoint;
-(void)play;
-(void)setPaused:(char)arg1 ;
-(void)commonInit;
-(AVPlayer *)_player;
-(char)isEqualToNode:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 ;
-(id)initWithVideoURL:(id)arg1 ;
-(void)_didMakeBackingNode;
-(SKCNode*)_makeBackingNode;
-(id)initWithAVPlayer:(id)arg1 ;
-(void)set_player:(AVPlayer *)arg1 ;
-(id)initWithVideoFileNamed:(id)arg1 ;
@end

