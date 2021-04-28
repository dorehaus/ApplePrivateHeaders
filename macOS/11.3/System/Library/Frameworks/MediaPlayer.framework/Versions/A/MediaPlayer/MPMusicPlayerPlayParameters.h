/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, MPIdentifierSet, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding> {

	char _libraryContent;
	NSDictionary* _dictionary;
	MPIdentifierSet* _identifiers;
	NSString* _itemKind;
	NSString* _itemID;
	NSString* _catalogID;

}

@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemKind;                                 //@synthesize itemKind=_itemKind - In the implementation block
@property (getter=isLibraryContent,nonatomic,readonly) char libraryContent;              //@synthesize libraryContent=_libraryContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * catalogID;                                //@synthesize catalogID=_catalogID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;                           //@synthesize dictionary=_dictionary - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)itemID;
-(MPIdentifierSet *)identifiers;
-(NSString *)itemKind;
-(char)isLibraryContent;
-(NSString *)catalogID;
@end

