/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSArray, NSString, NSAttributedString;

@interface ICNFMCMessageHeaders : NSObject <NSCopying, NSMutableCopying> {

	id _sender;
	unsigned long long _encodingHint;
	NSData* _headerData;

}

@property (nonatomic,readonly) unsigned long long encodingHint;                                      //@synthesize encodingHint=_encodingHint - In the implementation block
@property (nonatomic,copy,readonly) NSData * headerData;                                             //@synthesize headerData=_headerData - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allHeaderKeys; 
@property (nonatomic,copy,readonly) NSString * mailVersion; 
@property (nonatomic,readonly) char messageIsFromMicrosoft; 
@property (nonatomic,copy,readonly) NSAttributedString * attributedString; 
@property (nonatomic,copy,readonly) NSAttributedString * attributedStringForAllHeaders; 
+(void)initialize;
+(char)isAddressHeaderKey:(id)arg1 ;
+(char)isMessageIDHeaderKey:(id)arg1 ;
+(id)basicHeaderKeys;
+(id)customDisplayedHeaders;
+(char)_customHeadersEnabled;
+(id)customHeadersIgnoringDisabledState;
+(id)localizedHeaders;
+(char)isHumanReadableHeaderKey:(id)arg1 ;
+(id)_localizedHeadersForKeys;
+(void)setCustomDisplayedHeaders:(id)arg1 ;
+(id)localizedHeaderForKey:(id)arg1 ;
+(id)localizedHeadersFromEnglishHeaders:(id)arg1 ;
+(id)englishHeadersFromLocalizedHeaders:(id)arg1 ;
+(id)headerKeysFromLocalizedHeaders:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)attributedString;
-(id)_sender;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)headersForKey:(id)arg1 ;
-(NSData *)headerData;
-(NSArray *)allHeaderKeys;
-(id)firstAddressForKey:(id)arg1 ;
-(id)firstMessageIDForKey:(id)arg1 ;
-(id)addressListForKey:(id)arg1 ;
-(NSAttributedString *)attributedStringForAllHeaders;
-(id)messageIDListForKey:(id)arg1 ;
-(id)initWithHeaderData:(id)arg1 encodingHint:(unsigned long long)arg2 ;
-(char)hasHeaderForKey:(id)arg1 ;
-(void)appendHeaderData:(id)arg1 recipients:(id)arg2 recipientsByHeaderKey:(id)arg3 expandGroups:(char)arg4 includeComment:(char)arg5 ;
-(void)appendHeaderData:(id)arg1 recipients:(id)arg2 ;
-(unsigned long long)encodingHint;
-(id)_headersToDisplayFromHeaderKeys:(id)arg1 ;
-(id)_headersForKey:(id)arg1 ;
-(id)_htmlHeaderKey:(id)arg1 useBold:(char)arg2 useGray:(char)arg3 ;
-(id)_htmlValueWithKey:(id)arg1 value:(id)arg2 useBold:(char)arg3 ;
-(id)_capitalizedKeyForKey:(id)arg1 ;
-(id)_attributedStringForHeaders:(id)arg1 ;
-(id)_firstAddressForKey:(id)arg1 sender:(id)arg2 ;
-(void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2 ;
-(id)_newHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 ;
-(char)messageIsFromMicrosoft;
-(id)_newDecodedAddressFromDataInRange:(NSRange)arg1 sender:(id)arg2 consumedLength:(unsigned long long*)arg3 ;
-(id)_newDecodedMessageIDFromDataInRange:(NSRange)arg1 sender:(id)arg2 consumedLength:(unsigned long long*)arg3 ;
-(id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2 ;
-(id)htmlStringUseBold:(char)arg1 useGray:(char)arg2 ;
-(id)headersDictionaryForMessageType:(char)arg1 ;
-(void)_resetSender;
-(NSString *)mailVersion;
-(id)encodedHeadersIncludingFromSpace:(char)arg1 ;
-(void)_appendAddressList:(id)arg1 toData:(id)arg2 ;
@end

