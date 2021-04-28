/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSImage, AVAsset, NSString;

@interface MPArtworkRepresentation : NSObject {

	long long _kind;
	NSImage* _image;
	AVAsset* _video;
	NSString* _visualIdenticalityStringRepresentation;
	id _representationToken;
	CGSize _representationSize;

}

@property (assign,nonatomic) long long kind;                                                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) NSImage * image;                                                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) AVAsset * video;                                                       //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) CGSize representationSize;                                             //@synthesize representationSize=_representationSize - In the implementation block
@property (nonatomic,retain) id representationToken;                                                //@synthesize representationToken=_representationToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * visualIdenticalityStringRepresentation;              //@synthesize visualIdenticalityStringRepresentation=_visualIdenticalityStringRepresentation - In the implementation block
+(id)representationWithSize:(CGSize)arg1 image:(id)arg2 ;
+(id)representationWithSize:(CGSize)arg1 video:(id)arg2 ;
+(id)representationForVisualIdentity:(id)arg1 withSize:(CGSize)arg2 image:(id)arg3 ;
+(id)representationForVisualIdentity:(id)arg1 withSize:(CGSize)arg2 video:(id)arg3 ;
-(void)setImage:(NSImage *)arg1 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(NSImage *)image;
-(id)debugQuickLookObject;
-(AVAsset *)video;
-(void)setVideo:(AVAsset *)arg1 ;
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(NSString *)visualIdenticalityStringRepresentation;
-(id)representationToken;
-(void)setRepresentationToken:(id)arg1 ;
@end

