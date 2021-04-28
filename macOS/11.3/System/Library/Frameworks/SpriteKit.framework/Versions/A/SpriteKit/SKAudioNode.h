/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioNode;

@interface SKAudioNode : SKNode <NSSecureCoding> {

	SKCAudioNode* _skcAudioNode;
	char _autoplayLooped;
	char _positional;

}

@property (nonatomic,retain) AVAudioNode * avAudioNode; 
@property (assign,nonatomic) char autoplayLooped;                              //@synthesize autoplayLooped=_autoplayLooped - In the implementation block
@property (assign,getter=isPositional,nonatomic) char positional;              //@synthesize positional=_positional - In the implementation block
+(char)supportsSecureCoding;
+(id)_audioURLWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)commonInit;
-(id)audioURL;
-(char)isEqualToNode:(id)arg1 ;
-(id)initWithAVAudioNode:(id)arg1 ;
-(id)audioFile;
-(void)setPositional:(char)arg1 ;
-(char)isPositional;
-(id)initWithFileNamed:(id)arg1 ;
-(id)audioFileName;
-(void)setAudioFileName:(id)arg1 ;
-(void)setAudioURL:(id)arg1 ;
-(void)_didMakeBackingNode;
-(SKCNode*)_makeBackingNode;
-(void)setAutoplayLooped:(char)arg1 ;
-(void)_setAudioName:(id)arg1 bundle:(id)arg2 ;
-(void)setAvAudioNode:(AVAudioNode *)arg1 ;
-(char)autoplayLooped;
-(id)initWithFileNamed:(id)arg1 bundle:(id)arg2 ;
-(AVAudioNode *)avAudioNode;
-(void)_playLooped;
-(void)_connectToScene:(id)arg1 ;
@end

