/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSArray, NSMutableDictionary;

@interface NSPDFInfo : NSObject <NSCopying, NSCoding> {

	NSURL* _URL;
	NSArray* _tagNames;
	long long _orientation;
	CGSize _paperSize;
	NSMutableDictionary* _attributes;
	char _fileExtensionHidden;

}

@property (copy) NSURL * URL;                                                   //@synthesize URL=_URL - In the implementation block
@property (getter=isFileExtensionHidden) char fileExtensionHidden; 
@property (copy) NSArray * tagNames;                                            //@synthesize tagNames=_tagNames - In the implementation block
@property (assign) long long orientation;                                       //@synthesize orientation=_orientation - In the implementation block
@property (assign) CGSize paperSize;                                            //@synthesize paperSize=_paperSize - In the implementation block
@property (readonly) NSMutableDictionary * attributes;                          //@synthesize attributes=_attributes - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(NSMutableDictionary *)attributes;
-(NSArray *)tagNames;
-(long long)orientation;
-(CGSize)paperSize;
-(char)isFileExtensionHidden;
-(void)setFileExtensionHidden:(char)arg1 ;
-(void)setTagNames:(NSArray *)arg1 ;
-(void)setPaperSize:(CGSize)arg1 ;
@end

