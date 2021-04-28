/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, NSString;

@interface WFWebResource : NSObject <NSSecureCoding, NSCopying> {

	NSData* _data;
	NSURL* _URL;
	NSString* _MIMEType;
	NSString* _textEncodingName;
	NSString* _frameName;

}

@property (nonatomic,readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) NSString * textEncodingName;              //@synthesize textEncodingName=_textEncodingName - In the implementation block
@property (nonatomic,readonly) NSString * frameName;                     //@synthesize frameName=_frameName - In the implementation block
+(char)supportsSecureCoding;
+(id)webResourceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
+(id)webResourceWithURL:(id)arg1 ;
+(id)webResourceWithHTMLString:(id)arg1 baseURL:(id)arg2 ;
+(id)webResourceWithFile:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(NSString *)frameName;
-(id)loadInWKWebView:(id)arg1 ;
@end

