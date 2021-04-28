/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/Versions/A/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, ASAAudioFormat, NSArray;

@interface ASAStream : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isInput,nonatomic,readonly) char input; 
@property (getter=isOutput,nonatomic,readonly) char output; 
@property (nonatomic,readonly) unsigned terminalType; 
@property (nonatomic,readonly) unsigned startingChannel; 
@property (nonatomic,readonly) unsigned latency; 
@property (nonatomic,copy) ASAAudioFormat * virtualFormat; 
@property (nonatomic,copy) ASAAudioFormat * physicalFormat; 
@property (nonatomic,copy,readonly) NSArray * availableVirtualFormats; 
@property (nonatomic,copy,readonly) NSArray * availablePhysicalFormats; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controls; 
@property (getter=isVirtualFormatSettable,nonatomic,readonly) char virtualFormatSettable; 
@property (getter=isPhysicalFormatSettable,nonatomic,readonly) char physicalFormatSettable; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(char)isActive;
-(unsigned)latency;
-(NSArray *)controls;
-(unsigned)startingChannel;
-(char)isInput;
-(unsigned)terminalType;
-(ASAAudioFormat *)virtualFormat;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(char)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(char)isVirtualFormatSettable;
-(char)isPhysicalFormatSettable;
-(NSArray *)availableVirtualFormats;
-(ASAAudioFormat *)physicalFormat;
-(NSArray *)availablePhysicalFormats;
-(char)isOutput;
-(void)setVirtualFormat:(ASAAudioFormat *)arg1 ;
-(void)setPhysicalFormat:(ASAAudioFormat *)arg1 ;
@end

