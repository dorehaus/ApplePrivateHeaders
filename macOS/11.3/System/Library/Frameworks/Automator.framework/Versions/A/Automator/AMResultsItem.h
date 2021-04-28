/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSImage;

@interface AMResultsItem : NSObject {

	id _object;
	NSString* _humanReadableName;
	NSImage* _icon;
	NSString* _iconPath;
	NSString* _UUID;

}

@property (nonatomic,retain) id object;                                         //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSString * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSImage * icon; 
@property (nonatomic,readonly) NSString * iconPath; 
@property (nonatomic,readonly) NSString * humanReadableName; 
@property (nonatomic,readonly) NSImage * imageRepresentation; 
@property (nonatomic,readonly) NSString * imageRepresentationType; 
@property (nonatomic,readonly) NSString * imageUID; 
@property (nonatomic,readonly) id result; 
+(id)resultsItemWithObject:(id)arg1 ;
-(id)description;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(id)result;
-(NSString *)UUID;
-(NSImage *)icon;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)iconPath;
-(NSString *)imageUID;
-(NSString *)imageRepresentationType;
-(NSImage *)imageRepresentation;
-(id)imageTitle;
-(NSString *)humanReadableName;
-(id)imageSubtitle;
@end
