/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/Versions/A/InAppMessagesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface IAMContent : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSArray* _images;
	NSArray* _actions;
	NSDictionary* _contentParameters;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                         //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSDictionary * contentParameters;              //@synthesize contentParameters=_contentParameters - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(NSArray *)images;
-(NSString *)body;
-(NSArray *)actions;
-(NSDictionary *)contentParameters;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 images:(id)arg4 actions:(id)arg5 contentParameters:(id)arg6 identifier:(id)arg7 ;
-(id)initWithICMessageContent:(id)arg1 ;
@end
