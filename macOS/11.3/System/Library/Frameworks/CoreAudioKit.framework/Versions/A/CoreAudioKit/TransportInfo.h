/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSImage, NSString;

@interface TransportInfo : NSObject <NSCopying> {

	NSImage* image;
	NSString* name;

}

@property (retain) NSImage * image; 
@property (retain) NSString * name; 
+(id)imageForType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(char)isEqualTo:(id)arg1 ;
-(NSImage *)image;
-(id)initWithTransportType:(unsigned)arg1 name:(id)arg2 ;
@end

