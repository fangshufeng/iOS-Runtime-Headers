/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSURL;

@interface YTVideoReference : NSObject  {
    NSURL *_contentURL;
    unsigned int _duration;
    int _profile;
}


- (id)initWithContentURL:(id)arg1 duration:(unsigned int)arg2 profile:(int)arg3;
- (id)initFromArchiveDictionary:(id)arg1;
- (id)archiveDictionary;
- (id)contentURL;
- (unsigned int)duration;
- (int)profile;
- (id)description;
- (void)dealloc;

@end