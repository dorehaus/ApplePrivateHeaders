/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSURLDownloadDelegate.h>

@protocol ICNFMCMessageDataSource;
@class NSString, NSMutableDictionary, NSArray, ICNFMCError, ICNFMCMessageBody, ICNFMCMessage, ICNFMCMimeBody, NSData, ICNFMCParsedMessage, NSFileWrapper, ICNFMCFileTypeInfo, WebArchive;

@interface ICNFMCMimePart : NSObject <NSURLDownloadDelegate> {

	id _parentOrBody;
	ICNFMCMimePart* _nextPart;
	long long _typeCode;
	long long _subtypeCode;
	NSString* _type;
	NSString* _subtype;
	NSMutableDictionary* _bodyParameters;
	NSString* _contentTransferEncoding;
	id _encryptSignLock;
	NSArray* _messageSigners;
	ICNFMCError* _smimeError;
	NSMutableDictionary* _otherIvars;
	char _isMimeEncrypted;
	char _isMimeSigned;
	ICNFMCMessageBody* _decryptedMessageBody;
	ICNFMCMessage* _decryptedMessage;
	id<ICNFMCMessageDataSource> _decryptedMessageDataSource;
	NSRange _range;

}

@property (assign,nonatomic) char isMimeEncrypted;                                                //@synthesize isMimeEncrypted=_isMimeEncrypted - In the implementation block
@property (assign,nonatomic) char isMimeSigned;                                                   //@synthesize isMimeSigned=_isMimeSigned - In the implementation block
@property (nonatomic,retain) ICNFMCMessageBody * decryptedMessageBody;                            //@synthesize decryptedMessageBody=_decryptedMessageBody - In the implementation block
@property (nonatomic,retain) ICNFMCMessage * decryptedMessage;                                    //@synthesize decryptedMessage=_decryptedMessage - In the implementation block
@property (nonatomic,retain) id<ICNFMCMessageDataSource> decryptedMessageDataSource;              //@synthesize decryptedMessageDataSource=_decryptedMessageDataSource - In the implementation block
@property (nonatomic,retain) ICNFMCMimeBody * mimeBody; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * subtype; 
@property (nonatomic,copy) NSString * contentTransferEncoding;                                    //@synthesize contentTransferEncoding=_contentTransferEncoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIDURLString; 
@property (nonatomic,copy,readonly) NSArray * bodyParameterKeys; 
@property (nonatomic,copy) NSString * disposition; 
@property (nonatomic,copy,readonly) NSArray * dispositionParameterKeys; 
@property (nonatomic,copy) NSString * contentDescription; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSString * contentLocation; 
@property (nonatomic,copy) NSArray * languages; 
@property (nonatomic,copy) NSArray * subparts; 
@property (nonatomic,readonly) unsigned long long approximateRawSize; 
@property (nonatomic,readonly) unsigned long long approximateDecodedSize; 
@property (nonatomic,readonly) char hasCachedDataInStore; 
@property (assign,nonatomic) NSRange range;                                                       //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSData * bodyData; 
@property (nonatomic,copy,readonly) NSString * bodyString; 
@property (nonatomic,readonly) unsigned long long formatFlowedOptions; 
@property (nonatomic,copy,readonly) NSString * bodyConvertedFromFlowedText; 
@property (nonatomic,readonly) ICNFMCParsedMessage * parsedMessage; 
@property (nonatomic,copy,readonly) NSData * signedData; 
@property (nonatomic,readonly) char usesKnownSignatureProtocol; 
@property (nonatomic,copy,readonly) NSString * partNumber; 
@property (nonatomic,readonly) ICNFMCMimePart * parentPart; 
@property (nonatomic,readonly) ICNFMCMimePart * firstChildPart; 
@property (nonatomic,readonly) ICNFMCMimePart * nextSiblingPart; 
@property (nonatomic,readonly) ICNFMCMimePart * startPart; 
@property (nonatomic,readonly) ICNFMCMimePart * bestAlternative; 
@property (nonatomic,readonly) unsigned macTypeCode; 
@property (nonatomic,readonly) unsigned macCreatorCode; 
@property (nonatomic,readonly) unsigned numberOfAttachments; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (nonatomic,copy,readonly) NSString * attachmentFilename; 
@property (nonatomic,copy,readonly) NSArray * attachmentFilenames; 
@property (nonatomic,readonly) NSFileWrapper * fileWrapper; 
@property (nonatomic,readonly) ICNFMCFileTypeInfo * typeInfo; 
@property (nonatomic,readonly) ICNFMCMimePart * textHtmlPart; 
@property (nonatomic,copy,readonly) WebArchive * webArchive; 
@property (nonatomic,readonly) char isRich; 
@property (nonatomic,readonly) char isHTML; 
@property (nonatomic,readonly) char isReadableText; 
@property (nonatomic,readonly) char isAttachment; 
@property (nonatomic,readonly) char isCalendar; 
@property (nonatomic,readonly) char isMessageExternalBodyWithURL; 
@property (nonatomic,readonly) char isStationeryImage; 
@property (nonatomic,readonly) char isAutoArchivePart; 
@property (nonatomic,readonly) char isImage; 
@property (nonatomic,readonly) char isSigned; 
@property (nonatomic,readonly) char isEncrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)mimeParameterIsHumanReadable:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)subtype;
-(long long)typeCode;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSArray *)attachments;
-(ICNFMCFileTypeInfo *)typeInfo;
-(NSFileWrapper *)fileWrapper;
-(id)attributedString;
-(NSArray *)languages;
-(WebArchive *)webArchive;
-(NSString *)contentDescription;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)setContentDescription:(NSString *)arg1 ;
-(id)decode;
-(NSData *)bodyData;
-(NSString *)contentLocation;
-(void)setContentLocation:(NSString *)arg1 ;
-(unsigned)numberOfAttachments;
-(char)isEncrypted;
-(void)setSubtype:(NSString *)arg1 ;
-(char)isImage;
-(char)isCalendar;
-(char)isAttachment;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(NSData *)signedData;
-(NSString *)attachmentFilename;
-(char)isSigned;
-(NSArray *)subparts;
-(NSString *)partNumber;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)disposition;
-(char)isAutoArchivePart;
-(char)isType:(id)arg1 subtype:(id)arg2 ;
-(unsigned long long)approximateDecodedSize;
-(NSString *)bodyString;
-(ICNFMCMimePart *)firstChildPart;
-(ICNFMCMimePart *)nextSiblingPart;
-(char)isRich;
-(char)parseIMAPPropertyList:(id)arg1 ;
-(id)bodyParameterForKey:(id)arg1 ;
-(id)_attachmentFilenameWithHiddenExtension:(char*)arg1 ;
-(char)isMessageExternalBodyWithURL;
-(id)dispositionParameterForKey:(id)arg1 ;
-(void)addSubpart:(id)arg1 ;
-(void)setBodyParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setDisposition:(NSString *)arg1 ;
-(void)setDispositionParameter:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)bodyParameterKeys;
-(NSArray *)dispositionParameterKeys;
-(NSString *)contentTransferEncoding;
-(void)setContentTransferEncoding:(NSString *)arg1 ;
-(char)isReadableText;
-(void)setSubparts:(NSArray *)arg1 ;
-(unsigned)macTypeCode;
-(ICNFMCMimePart *)parentPart;
-(id)_getSomeCharsetFromPartTree;
-(unsigned long long)formatFlowedOptions;
-(void)_appendToDescription:(id)arg1 withIndent:(unsigned long long)arg2 ;
-(char)usesKnownSignatureProtocol;
-(char)_isIWorkArchive;
-(unsigned long long)approximateRawSize;
-(id)_chosenAlternativePartOrParts:(id*)arg1 ;
-(id)_partThatIsAttachment;
-(char)shouldConsiderInlineOverridingExchangeServer;
-(unsigned)macCreatorCode;
-(ICNFMCMimePart *)bestAlternative;
-(id)_archiveForData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 subresources:(id)arg6 subframeArchives:(id)arg7 ;
-(id)_archiveForData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(id)htmlStringForMimePart:(id)arg1 attachment:(id)arg2 ;
-(id)_archiveForMultipartRelated;
-(id)_createArchiveWithConvertedPlainTextBodyClassFromArchive:(id)arg1 ;
-(id)_archiveForString:(id)arg1 URL:(id)arg2 needsPlainTextBodyClass:(char)arg3 ;
-(id)_archiveForFileWrapper:(id)arg1 URL:(id)arg2 ;
-(NSString *)contentIDURLString;
-(void)_setupDictionary:(id*)arg1 fromArray:(id)arg2 ;
-(id)_createFileWrapper;
-(unsigned long long)_getHFSAttachmentEncodingHint;
-(NSString *)bodyConvertedFromFlowedText;
-(void)_setMessageSigners:(id)arg1 andSigningError:(id)arg2 ;
-(ICNFMCMimeBody *)mimeBody;
-(void)setMimeBody:(ICNFMCMimeBody *)arg1 ;
-(id)_fullMimeTypeEvenInsideAppleDouble;
-(char)isStationeryImage;
-(id)_getMessageAttachment:(long long)arg1 ;
-(long long)subtypeCode;
-(char)isTypeCode:(long long)arg1 subtypeCode:(long long)arg2 ;
-(void)_getAttachmentsAndAddToCount:(unsigned*)arg1 isSigned:(char*)arg2 isEncrypted:(char*)arg3 attachments:(id)arg4 attachmentsName:(id)arg5 numberOfTNEFAttachments:(unsigned*)arg6 ;
-(id)_getMessageAttachment:(long long)arg1 context:(id)arg2 ;
-(void)getNumberOfAttachments:(unsigned*)arg1 filenames:(id)arg2 numberOfTNEFAttachments:(unsigned*)arg3 isSigned:(char*)arg4 isEncrypted:(char*)arg5 ;
-(id)decryptedMessageBodyIsEncrypted:(char*)arg1 isSigned:(char*)arg2 error:(id*)arg3 ;
-(NSArray *)attachmentFilenames;
-(char)isHTML;
-(ICNFMCMimePart *)startPart;
-(char)hasCachedDataInStore;
-(void)configureFileWrapper:(id)arg1 ;
-(id)decodeWithContext:(id)arg1 ;
-(id)_newAttachment;
-(id)_remoteFileWrapper;
-(id)subpartAtIndex:(long long)arg1 ;
-(id)textPart;
-(ICNFMCMimePart *)textHtmlPart;
-(id)decodedContentWithContext:(id)arg1 ;
-(void)htmlString:(id*)arg1 createWebResource:(id*)arg2 forFileWrapper:(id)arg3 partNumber:(id)arg4 ;
-(id)parsedMessageWithContext:(id)arg1 ;
-(char)isMimeEncrypted;
-(char)isMimeSigned;
-(ICNFMCMessageBody *)decryptedMessageBody;
-(void)setIsMimeEncrypted:(char)arg1 ;
-(void)setIsMimeSigned:(char)arg1 ;
-(void)setDecryptedMessageBody:(ICNFMCMessageBody *)arg1 ;
-(void)setDecryptedMessage:(ICNFMCMessage *)arg1 ;
-(void)setDecryptedMessageDataSource:(id<ICNFMCMessageDataSource>)arg1 ;
-(void)_parseSubpartsWithEncodingHint:(unsigned long long)arg1 messageBodyData:(id)arg2 hasVisualEncoding:(char*)arg3 ;
-(void)_parseHeadersWithEncodingHint:(unsigned long long)arg1 headerData:(id)arg2 bodyData:(id)arg3 hasVisualEncoding:(char*)arg4 ;
-(id)_parseUUEncodedPartsWithEncodingHint:(unsigned long long)arg1 bodyData:(id)arg2 range:(NSRange)arg3 ;
-(char)parseMimeBodyFetchIfNotAvailable:(char)arg1 allowPartial:(char)arg2 ;
-(id)decodeTextPlainWithContext:(id)arg1 ;
-(id)decodeTextHtmlWithContext:(id)arg1 ;
-(id)decodeTextCalendarWithContext:(id)arg1 ;
-(id)decodeTextEnrichedWithContext:(id)arg1 ;
-(id)decodeTextRichtextWithContext:(id)arg1 ;
-(id)decodeTextRtfWithContext:(id)arg1 ;
-(id)decodeTextWithContext:(id)arg1 ;
-(id)decodeApplicationOctet_streamWithContext:(id)arg1 ;
-(id)decodeApplicationZipWithContext:(id)arg1 ;
-(id)decodeApplicationApplefileWithContext:(id)arg1 ;
-(id)decodeApplicationMac_binhex40WithContext:(id)arg1 ;
-(id)decodeApplicationSmilWithContext:(id)arg1 ;
-(id)decodeApplicationApple_msg_composite_imageWithContext:(id)arg1 ;
-(id)decodeMultipartAlternativeWithContext:(id)arg1 ;
-(id)decodeMultipartRelatedWithContext:(id)arg1 ;
-(id)decodeMultipartAppledoubleWithContext:(id)arg1 ;
-(id)decodeMultipartFolderWithContext:(id)arg1 ;
-(id)decodeMultipartWithContext:(id)arg1 ;
-(id)decodeMessageRfc822WithContext:(id)arg1 ;
-(id)decodeMessageDelivery_statusWithContext:(id)arg1 ;
-(id)decodeMessageExternal_bodyWithContext:(id)arg1 ;
-(id)decodeMessagePartialWithContext:(id)arg1 ;
-(void)markAsStationeryImage;
-(char)needsSignatureVerification:(id*)arg1 ;
-(id)copyMessageSigners;
-(id)decodedContent;
-(ICNFMCParsedMessage *)parsedMessage;
-(void)clearCachedDecryptedMessageBody;
-(void)setDecryptedMessageBody:(id)arg1 isEncrypted:(char)arg2 isSigned:(char)arg3 error:(id)arg4 ;
-(char)parseMimeBody;
-(ICNFMCMessage *)decryptedMessage;
-(id<ICNFMCMessageDataSource>)decryptedMessageDataSource;
-(void)renderString:(id)arg1 ;
@end
