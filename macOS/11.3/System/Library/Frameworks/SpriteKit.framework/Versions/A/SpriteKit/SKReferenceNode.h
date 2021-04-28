/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSURL, NSString, SKNode;

@interface SKReferenceNode : SKNode {

	NSURL* _referenceURL;
	NSString* _referenceFileName;
	SKNode* _resolvedNode;
	char _hasResolvedURL;

}

@property (nonatomic,retain) NSString * referenceFileName; 
@property (nonatomic,retain) NSURL * referenceURL; 
+(char)supportsSecureCoding;
+(id)referenceNodeWithURL:(id)arg1 ;
+(id)nodeWithFileNamed:(id)arg1 ;
+(id)referenceNodeWithFileNamed:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)referenceURL;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)setReferenceFileName:(NSString *)arg1 ;
-(NSString *)referenceFileName;
-(void)resolveReferenceNode;
-(void)didLoadReferenceNode:(id)arg1 ;
-(id)_resolveReferenceNode;
-(void)resolveNodeFromArchiveData:(id)arg1 ;
-(id)resolvedNode;
@end

