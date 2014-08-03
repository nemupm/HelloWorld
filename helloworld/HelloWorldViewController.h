//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Kiko on 2014/07/26.
//
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

@end
