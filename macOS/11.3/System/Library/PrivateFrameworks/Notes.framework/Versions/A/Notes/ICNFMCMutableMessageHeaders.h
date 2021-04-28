/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/ICNFMCMessageHeaders.h>

@class NSMutableDictionary, NSMutableArray;

@interface ICNFMCMutableMessageHeaders : ICNFMCMessageHeaders {

	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)allHeaderKeys;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(id)addressListForKey:(id)arg1 ;
-(id)messageIDListForKey:(id)arg1 ;
-(char)hasHeaderForKey:(id)arg1 ;
-(void)removeHeaderForKey:(id)arg1 ;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(void)setMessageIDList:(id)arg1 forKey:(id)arg2 ;
-(id)_headersForKey:(id)arg1 ;
-(id)_firstAddressForKey:(id)arg1 sender:(id)arg2 ;
-(id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2 ;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(id)encodedHeadersIncludingFromSpace:(char)arg1 ;
-(void)addFromSpaceIfMissing;
@end
