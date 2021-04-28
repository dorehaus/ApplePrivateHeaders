/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying> {

	float _red;
	float _green;
	float _blue;
	float _alpha;

}

@property (nonatomic,readonly) _MRColorProtobuf * protobuf; 
@property (assign,nonatomic) float red;                                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) float green;                                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) float blue;                                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) float alpha;                                //@synthesize alpha=_alpha - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(float)red;
-(float)green;
-(float)blue;
-(_MRColorProtobuf *)protobuf;
-(void)setBlue:(float)arg1 ;
-(void)setGreen:(float)arg1 ;
-(void)setRed:(float)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
@end

